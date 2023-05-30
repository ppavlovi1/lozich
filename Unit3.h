//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TRegistracija : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *EKorisnickoReg;
	TLabel *Lozinka;
	TEdit *ELozinkaReg;
	TLabel *Label2;
	TEdit *ELozinka2Reg;
	TButton *Gumb;
	TADOTable *Korisnici2;
	void __fastcall GumbClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegistracija(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistracija *Registracija;
//---------------------------------------------------------------------------
#endif
