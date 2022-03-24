//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ViewSlide.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormCardPanel *FormCardPanel;

//---------------------------------------------------------------------------
__fastcall TFormCardPanel::TFormCardPanel(TComponent* Owner)
	: TForm(Owner)
{

}

const UnicodeString OPHIUCHUS = "Rho Ophiuchus -  Fonte: https://www.astrobin.com/" ;
const UnicodeString SUN  = "Sun AR2960 05_03_2022 -  Fonte: https://www.astrobin.com/";
const UnicodeString BASALT = "Basalt colors in Copernic area -  Fonte: https://www.astrobin.com/";


//---------------------------------------------------------------------------
void __fastcall TFormCardPanel::loopClick(TObject *Sender)
{
   bProximo->Enabled =  ! loop->Checked;
   bAnterior->Enabled = ! loop->Checked;
   Timer1->Enabled = ! bProximo->Enabled;
}
//---------------------------------------------------------------------------

void __fastcall TFormCardPanel::bProximoClick(TObject *Sender)
{
	CardPanel->NextCard();
	UpdateLegend();
}
//---------------------------------------------------------------------------
void __fastcall TFormCardPanel::bAnteriorClick(TObject *Sender)
{
	CardPanel->PreviousCard();	
    UpdateLegend();     
}
//---------------------------------------------------------------------------
void TFormCardPanel::UpdateLegend()
{
    if (CardPanel->ActiveCard == Card1) {
    	legend->Caption = String(OPHIUCHUS) ;        
    } else
    if (CardPanel->ActiveCard == Card2) {
    	legend->Caption = SUN;
	}
	else legend->Caption = BASALT;
}
void __fastcall TFormCardPanel::Timer1Timer(TObject *Sender)
{
	CardPanel->NextCard();
	UpdateLegend();
}
//---------------------------------------------------------------------------

