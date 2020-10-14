#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Podaj rozmiar kwadratu: ";
    cin >> size;
   
	//cout << (size % 2);

	if ((size % 2) == 0)
	{
		for (int i = 1; i <= size; i++)// odpowiada za ilosc kolumn
		{
			cout << endl;
			for (int j = 1; j <= size; j++)// odpowiada z ilosc wierszy
			{

				if ((i <= (size / 2) and j <= (size / 2)) or (i > (size / 2) and j > (size / 2)))
					cout << "X";
				else
					cout << ".";
			}
		}
	}
	else
		cout<< "Nie jest mozliwe wykonanie kwadratu o tej dlugosci";
	
