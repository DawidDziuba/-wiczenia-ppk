#include<iostream>
#include <math.h>

using namespace std;
 
int main()
{
	double a, b, c;
	
	cout<< "Podaj zmienna a ";cin>> a;
	cout<< "Podaj zmienna b ";cin>> b;
	cout<< "Podaj zmienna c ";cin>> c;
	
//	ax2+bx+c
	
	double delta, x1, x2; // sqrtb2-4ac, (-b -+ sqrt delta)/ 2a
	delta= sqrt ( b*b -4*a*c);
//	cout << delta<<endl;
	
	if( a == 0) 
	{
		if( b == 0)
		{
			if(c == 0)
			cout<< "Tozsamosc";
			
			else
			cout<< "Sprzecznosc";
			
		}
		else
		{
		x1= -(c/b);
		cout<< x1;
		}
	}	
	else
	{
		if (delta > 0)
		{
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		cout<< x1,x2;
		}
		
		else if (delta == 0)
		{
		x1=(-b)/(2*a);
		cout<< x1;
		}
		
		else
		{
		cout<< "rozwiazanie znajduje sie w zbiorze liczb urojonych";
		}
	}


	
	
	



	
	
	
}
