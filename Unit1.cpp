//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{


   Korisnici->First();
   int zastava = 0;
   for(int i=0;i<Korisnici->RecordCount;i++)
   {
	if((Korisnici->FieldByName("Username")->AsString == EditKorisnicko->Text) && (Korisnici->FieldByName("Password")->AsString == EditLozinka->Text))
	zastava=1;
    break;
   }

   if (zastava==1) {

	Hide();
	Aplikacija->Show();
   }
   else ShowMessage("Krivo uneseni podatci");


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{

  Hide();
  Registracija->Show();

}
//---------------------------------------------------------------------------

