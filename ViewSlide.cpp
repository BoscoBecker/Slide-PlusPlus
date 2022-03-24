//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ViewSlide.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

	private void VisibleControlsButton(const value : boolean);

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::loopClick(TObject *Sender)
{
	case loop->Checked do{
		True:
		False
    }

}
//---------------------------------------------------------------------------
