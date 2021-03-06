//---------------------------------------------------------------------------



#include "UCPila.h"
#include "UPrincipal.h"
#include <vcl.h>

typedef int Tipo;

const -MAX=100;
class Pila{

	private:
		Tipo V[MAX+1];
		int cima;
	public:
		Pila();
		//constructor. Produce un Self vac?o. Crea una Pila vac?a

		void Push(Tipo dato);
		 //Pre: La pila no est? llena
		 //Inserta un "dato" al Self

		void Pop(Tipo &dato);
		 //Pre: La pila no est? vac?a
		 // Obtiene en "dato" el elemento que est? en la cima de la Pila, eliminandolo de la misma.

		bool Vacia();
		 //retorna true sii la pila est? vac?a y false en caso contrario
		bool Llena();
		 //retorna true sii la pila est? llena y false en caso contrario

		void borrar();
		 //Pre: La pila no est? vac?a
		 // Elimina el elemento que est? en la cima de la pila.

		Tipo Cabeza();
		 // Retorna el elemento que se encuentra en la cima de la Pila, sin eliminarlo
		void OrdIntercambio();
		int GetValor(int posi);
		int Cant();
		 //Retorna la cantidad de elementos que hay en la Pila
		 void Mostrar();
};

Pila::Pila()
{//constructor. Produce un Self vac?o. Crea una Pila vac?a
	cima = -1;
}



void Pila::Push(Tipo dato){
//Pre: La pila no est? llena. Inserta un "dato" al Self
	if(Llena()){
		ShowMessage("Error: Pila llena");
		exit(1);
	}
	cima++;
	V[cima] = dato;
}


void Pila::Pop(Tipo &dato){
//Pre: La pila no est? vac?a. Obtiene en "dato" el elemento que est? en la cima de la Pila, eliminandolo de la misma.
	if(Vacia()){
		ShowMessage("Error: Pila vac?a");
		exit(1);
	}
	dato = V[cima];
	cima--;
}

bool Pila::Vacia(){
//retorna true sii la pila est? vac?a y false en caso contrario
	return (cima==-1);
}

bool Pila::Llena(){
//retorna true sii la pila est? llena y false en caso contrario
	return (cima==MAX);
}

void Pila::borrar(){
//Pre: La pila no est? vac?a. Elimina el elemento que est? en la cima de la pila.
	if(Vacia()){
		ShowMessage("Error: Pila vac?a");
		exit(1);
	}
	cima--;
}
void Pila::OrdIntercambio()
{
int aux;
		for (int p = 0; p <= (MAX- 1); p++)
		{   for (int po = p + 1; po <= (MAX); po++)
			{
				if (V[po] < V[p]) {
					aux = V[po];
					V[po] = V[p];
					V[p] = aux;
				}
			}
		}
}
Tipo Pila::GetValor(int posi)
{
	return V[posi];
}
Tipo Pila::Cabeza(){
// Retorna el elemento que se encuentra en la cima de la Pila, sin eliminarlo
	if(Vacia()){
		ShowMessage("Error: Pila vac?a");
		exit(1);
	}
	return V[cima];
}

int Pila::Cant(){
	return (cima+1);
}

void Pila::Mostrar(){
	Form1->Memo1->Lines->Clear();
	for (int i=cima; i>=0 ; i--)
		Form1->Memo1->Lines->Add(IntToStr(V[i]));
}

//---------------------------------------------------------------------------

