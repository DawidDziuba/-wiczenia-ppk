#include <iostream>

using namespace std;

int main()
{
	int dolnyZakresWierszy, gornyZakresWierszy, dolnyZakresKolumn, gornyZakresKolumn;

	cout << "Podaj dolny zakres wierszy: ";
	cin >> dolnyZakresWierszy;
	cout << endl;
	
	cout << "Podaj gorny zakres wierszy: ";
	cin >> gornyZakresWierszy;
	cout << endl;
	
	cout << "Podaj dolny zakres kolumn : ";
	cin >> dolnyZakresKolumn;
	cout << endl;
	
	cout << "Podaj gorny zakres kolumn : ";
	cin >> gornyZakresKolumn;
	cout << endl;

	for (int i= dolnyZakresWierszy; i <= gornyZakresWierszy; i++)// odpowiada za ilosc kolumn
	{
		cout << endl;
		for (int j= dolnyZakresKolumn;j <= gornyZakresKolumn; j++)// odpowiada z ilosc wierszy
		{
			cout << i * j<< " ";

		}


	}






}

