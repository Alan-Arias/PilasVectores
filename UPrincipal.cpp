//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
#include "UCPila.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Pila P,Q;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int val = StrToInt(InputBox("Entrada","Ingrese val: ","0"));
	P.Push(val);
	P.Mostrar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Tipo x=0;
	P.Pop(x);
	ShowMessage("El elemento extraido es: "+IntToStr(x));
	P.Mostrar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	ShowMessage("La cantidad de elementos es: "+IntToStr(P.Cant()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	P.borrar();
	P.Mostrar();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	ShowMessage("El ultimo elemento ingresado es: "+IntToStr(P.Cabeza()));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
  ShowMessage(P.Cant());
  ShowMessage(Q.Cant());
  Q=P;
  ShowMessage(P.Cant());
  Q.Push(56);
  ShowMessage(Q.Cant());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
int val = StrToInt(InputBox("Entrada","Ingrese posicion: ","0"));
int u= P.GetValor(val);
ShowMessage("El valor es: "+IntToStr(u));

}
//---------------------------------------------------------------------------

