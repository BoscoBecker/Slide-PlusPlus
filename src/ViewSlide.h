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
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TFormCardPanel : public TForm
{
__published:	// IDE-managed Components
	TCardPanel *CardPanel;
	TCard *Card2;
	TCard *Card3;
	TPanel *Panel1;
	TButton *bAnterior;
	TButton *bProximo;
	TCheckBox *loop;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TPanel *Panel2;
	TLabel *legend;
	TLabel *Label2;
	TCard *Card1;
	TTimer *Timer1;
	void __fastcall loopClick(TObject *Sender);
	void __fastcall bProximoClick(TObject *Sender);
	void __fastcall bAnteriorClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormCardPanel(TComponent* Owner);
	void UpdateLegend();
};
//---------------------------------------------------------------------------
extern PACKAGE TFormCardPanel *FormCardPanel;
//---------------------------------------------------------------------------
#endif
