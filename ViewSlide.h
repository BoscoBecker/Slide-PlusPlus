//---------------------------------------------------------------------------

#ifndef ViewSlideH
#define ViewSlideH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.WinXPanels.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TCardPanel *CardPanel1;
	TCard *Card1;
	TCard *Card2;
	TCard *Card3;
	TCard *Card4;
	TCard *Card5;
	TCard *Card6;
	TPanel *Panel1;
	TButton *Button1;
	TButton *Button2;
	TCheckBox *loop;
	void __fastcall loopClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
