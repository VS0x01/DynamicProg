// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "parquet.h"
#include "Greeting.h"

#include <vector>
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cspin"
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}
// ---------------------------------------------------------------------------

unsigned long long int solve(int m, int n, unsigned long long int *rv) {
	std::vector<std::vector<unsigned long long int> > d(m + 1,
		std::vector<unsigned long long int>((1 << n), 0));
	d[0][0] = 1;
	for (int i = 0; i < m; i++)
		for (int mask = 0; mask < (1 << n); mask++) {
			for (int new_mask = 0; new_mask < (1 << n); new_mask++)
				if (can(mask, new_mask, n)) {
					d[i + 1][new_mask] += d[i][mask];
				}
		}
	for (int i = 0; i <= m; i++) {
		rv[i] = d[i][0];
	}
	return d[m][0];
}

bool can(int mask, int new_mask, int n) {
	if (!(mask & new_mask)) {
		mask |= new_mask;
		mask |= (1 << n);
		for (int i = 0; i < n; i++) {
			if (!(mask & (1 << i))) {
				if (!(mask & (1 << (i + 1)))) {
					i++;
				}
				else
					return false;
			}
		}
		return true;
	}
	return false;
}

void __fastcall TForm1::GoClick(TObject *Sender) {
	m_value->ReadOnly = true;
	n_value->ReadOnly = true;

	Room->GridLineWidth = 5;
	Room->Width = m_value->Value * (Room->DefaultColWidth + Room->GridLineWidth);
	Room->Height = n_value->Value * (Room->DefaultRowHeight + Room->GridLineWidth);
	Room->ColCount = m_value->Value;
	Room->RowCount = n_value->Value;

	unsigned long long int *room_values =
		new unsigned long long int[m_value->Value + 1];
	if(m_value->Value && n_value->Value) {
		ResultValue->Caption = solve(m_value->Value, n_value->Value, room_values);
		for (int i = 1; i <= m_value->Value; i++) {
			Room->Cells[i-1][n_value->Value - 1] = room_values[i];
		}
	} else ResultValue->Caption = 1;

	delete[] room_values;
	m_value->ReadOnly = false;
	n_value->ReadOnly = false;
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::RoomSelectCell(TObject * Sender, int ACol, int ARow,
	bool &CanSelect) {
	Room->Hint = Room->Cells[ACol][ARow] + "\nRoom size: " + (ACol + 1) + 'x' + (ARow + 1);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::WriteAllClick(TObject *Sender)
{
	m_value->Value = 20;
	for (int i = 1; i <= 8; i++) {
		n_value->Value = i;
		Go->Click();
	}	
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClearClick(TObject *Sender)
{
	for (int i = 0; i <= Room->RowCount; i++) {
		  Room->Rows[i]->Clear();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Close1Click(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::About1Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HowtoUseHelp1Click(TObject *Sender)
{
	AnsiString str="hh " + ExtractFilePath(Application->ExeName) + "Help\\Parquet.chm";
	ResultValue->Caption = str;
	WinExec(str.c_str(), SW_MAXIMIZE);
}
//---------------------------------------------------------------------------

