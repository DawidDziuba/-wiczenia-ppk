#include <iostream>
#include <math.h>


using namespace std;

int main()

{

	double a, b, c;
	double p,S;
	cout << "Wpisz dlugosc odcinka a: ";
	cin >> a;
	 
	cout << "Wpisz dlugosc odcinka b: ";
	cin >> b;
	
	cout << "Wpisz dlugosc odcinka c: ";
	cin >> c;
 
	
	if((c < a + b) and (b < c + a) and (a < c + b )) 				
	{
	
	p= (a+b+c)* 0.5;		
	S= sqrt (p*(p-a)*(p-b)*(p-c));
	
	cout <<"pole tego trojkata wynosi " << S;
		
	}
	else
	cout << "nie ma takiego trojkata" << endl;
}
