#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int llave;

typedef struct _info{

	int dato;

}Tinfo;

typedef struct _stdato{

    llave key;
    Tinfo info;
    struct _stdato *ant;
    struct _stdato *sig;

}tSdatoD;

typedef tSdatoD *TdatoD;

TdatoD addDato(int num);

TdatoD AgregarLDC(TdatoD *listaDC, TdatoD *nuevo,TdatoD *ultimo);
int validaNumint(int ri, int rf, char *mensaje, char *ERROR);
int ImprimirA(TdatoD *listaDC);
int ImprimirD(TdatoD *listaDC);

TdatoD addDato(int num)
{
   TdatoD nodo = NULL;

   nodo = (TdatoD)malloc(sizeof(tSdatoD));
   nodo->key = num ;
   nodo->info.dato = nodo->key;

   nodo->ant = NULL;
   nodo->sig = NULL;
   return nodo;
}
TdatoD AgregarLDC (TdatoD *listaDC, TdatoD *nuevo,TdatoD *ultimo)
{
	TdatoD temp = NULL;


	if((*listaDC))
	{

		if((*nuevo)->key < (*listaDC)->key)// inicio de la lista
		{

			(*nuevo)->sig = *listaDC;
			(*nuevo)->ant = *ultimo;
			//unirlo ala lista
			(*ultimo)->sig = *nuevo;
			(*listaDC)->ant = *nuevo;
			*listaDC = *nuevo;


			return temp;
		}
		else
		{
			if((*ultimo)->key < (*nuevo)->key)// ultimo de la lista
			{

				(*nuevo)->ant = *ultimo;
				(*nuevo)->sig = *listaDC;
				//unir
				(*ultimo)->sig = *nuevo;
				(*listaDC)->ant = *nuevo;
			    *ultimo = *nuevo;



			}
			else // entre 2 nodos
			{
				temp = *listaDC;

				while((*nuevo)->key > (temp->sig)->key)
				{

					temp = temp ->sig;
				}
				if((temp->sig)->key == (*nuevo)->key)
				{
					return *nuevo;
				}
				else
				{
					(*nuevo)->sig = temp->sig;
					(*nuevo)->ant = temp;

					(temp->sig)->ant = *nuevo;
					temp->sig = *nuevo;

					temp = NULL;

					return temp;
				}
			}
		}

	}
	else
	{

		*listaDC = *nuevo;
		 *ultimo = *nuevo;

	}


	return temp;
}





/////////Ascendente///////////
int ImprimirA(TdatoD *listaDC)
{


    if(*listaDC){


        *listaDC = (*listaDC )-> sig;
        return (*listaDC)->info.dato;
    }
}

/////Descendente///////////
int ImprimirD(TdatoD *listaDC)
{


    if(*listaDC){


        *listaDC = (*listaDC)->ant;
        return (*listaDC)->info.dato;
    }
}


