#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	//Inserimento matrice
	int r,c,i,j, mis[10][12];
	string v[10];
	do
	{
		cout<<"Inserisci numero righe: ";
		cin>>r;
	}
	while ((r <= 0) && (r > 10));
	do
	{
		cout<<"Inserisci numero colonne: ";
		cin>>c;
	}
	while ((c <= 0) && (c > 12));
	for (i=0; i<r; i++) //Inserimento città
	{
		cout<<"Inserisci città: ";
		cin>>v[i];
	}
	for (i=0; i<r; i++)
	{
		for (j=0; j<12; j++) //Ho messo "<12" perchè 12 è l'arco delle ore
		{
			cout<<"Inserisci misurazione: ";
			cin>>mis[i][j];
		}
	}
	//Ricerca misurazione minima
	int min;
	min=0;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++) //Ho messo il doppio ciclo così sai anche la città oltre alla misurazione
		{
			if (mis[i][j] < min)
			{
			min=mis[i][j];
			}
		}
	}
	//Ricerca misurazione 
	int f=0; //Questo è per il fla, il flag serve casomai inseriamo una città che non abbiamo inserito 
	string citt;
	do //Con il cilco do possiamo richiedere l'inserimento della città se ne inseriamo una sbagliata
	{
		cout<<"Inserisci una città: "; 
		cin>>citt;
		for (i=0; i<r; i++)
		{
			for (i=0; i<r; i++)
			{
				if (citt == v[i])
				{
					cout<<citt<<min;
					f=1; //Quando il programma trova la città inserita, il flag diventa 1, e i due cicli terminano perchè una volta trovata la città e inutile che continuano
				}
		}
	}
	if (f == 0) //se la f del flag rimane 0, cioè se il programma non ha trovato la città ti avvisa e più sotto con il while ripete il ciclo do
	{
		cout<<"Città non trovata";
	}
	}
	while (f == 0);
system ("PAUSE");
return 0;
}
