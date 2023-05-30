//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegistracija *Registracija;
//---------------------------------------------------------------------------
__fastcall TRegistracija::TRegistracija(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistracija::GumbClick(TObject *Sender)
{
int zastavaLozinka=0;
int zastavaPodaciBaza=0;

if (ELozinkaReg->Text == ELozinka2Reg->Text) {
	 zastavaLozinka=1;
}

Korisnici2->First();

   for(int i=0;i<Korisnici2->RecordCount;i++)
   {
	  if ((EKorisnickoReg->Text != Korisnici2->FieldByName("Username")->AsString) && zastavaLozinka==1) {

	  Korisnici2->Append();
	  Korisnici2->FieldByName("Username")->AsString = EKorisnickoReg->Text;
	  Korisnici2->FieldByName("Password")->AsString = ELozinkaReg->Text;
      Korisnici2->Post();
	  break;
	  }
   }

   if (zastavaLozinka==0) {
		  ShowMessage("lozinka nije isto upisana");
   }



}
//---------------------------------------------------------------------------

