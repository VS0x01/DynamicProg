//---------------------------------------------------------------------------

#ifndef parquetH
#define parquetH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include "cspin.h"
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *input_values;
	TCSpinEdit *m_value;
	TCSpinEdit *n_value;
	TLabel *n;
	TLabel *m;
	TLabel *Result;
	TButton *Go;
	TStringGrid *Room;
	TLabel *ResultValue;
	TButton *WriteAll;
	TButton *Clear;
	TPanel *Res;
	TPanel *Buttons;
	TMainMenu *MainMenu1;
	TMenuItem *Help1;
	TMenuItem *HowtoUseHelp1;
	TMenuItem *About1;
	TMenuItem *Window1;
	TMenuItem *Close1;
	TPanel *Опис;
	TCheckBox *Advanced;
	TMenuItem *Print1;
	TPrinterSetupDialog *PrinterSetupDialog1;
	void __fastcall GoClick(TObject *Sender);
	void __fastcall RoomSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall WriteAllClick(TObject *Sender);
	void __fastcall ClearClick(TObject *Sender);
	void __fastcall Close1Click(TObject *Sender);
	void __fastcall About1Click(TObject *Sender);
	void __fastcall HowtoUseHelp1Click(TObject *Sender);
	void __fastcall AdvancedClick(TObject *Sender);
	void __fastcall ResClick(TObject *Sender);
	void __fastcall ResultMouseLeave(TObject *Sender);
	void __fastcall Print1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
unsigned long long int solve(int, int, unsigned long long int *);
bool can(int, int, int);
//---------------------------------------------------------------------------
#endif
