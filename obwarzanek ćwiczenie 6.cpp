#include<iostream>
#include <math.h>
#include <cmath>
using namespace std;
 
int main()
{
	double promienPierwszy, promienDrugi;
	
	double obwodPierwszy, obwodDrugi, polePierwsze, poleDrugie, wynik ;
	
	cout << "Podaj promien pierwszego kola "; cin >> promienPierwszy;
	cout << "Podaj promien drugiego kola "; cin >> promienDrugi;
	
	obwodPierwszy= 2*promienPierwszy;
		cout <<"Obwod pierwszego kola wynosi "<< obwodPierwszy << endl;
		
		obwodDrugi= 2*promienDrugi;
		cout <<"Obwod drugiego kola wynosi "<< obwodDrugi << endl;
		
		polePierwsze= promienPierwszy* promienPierwszy;
		cout <<"Pole pierwszego kola wynosi "<< polePierwsze << endl;
		
		poleDrugie= promienDrugi* promienDrugi;
		cout <<"Pole drugiego kola wynosi "<< poleDrugie << endl;
	
	
	if (promienPierwszy> promienDrugi)
	{
		wynik=polePierwsze- poleDrugie;
		cout <<"Pole obwarzanka wynosi "<< wynik << endl;
	}
	else if (promienDrugi>promienPierwszy)
	{
		wynik=poleDrugie- polePierwsze;
		cout <<"Pole obwarzanka wynosi "<< wynik << endl;
	}
	else
	{
		cout <<"Taki obwarzanek nie istnieje";
	}
	
	
	
	
	
}
