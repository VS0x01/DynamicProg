//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Greeting.h"
#include "parquet.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	this->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormActivate(TObject *Sender)
{
	Form1->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form1->Enabled = true;
}
//---------------------------------------------------------------------------
