#include <iostream>
#include <clocale>

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

using namespace std;

int main()
{	

	enum nazwa {styczen =1, luty, marzec, kwiecien, maj, czerwiec, lipiec, sierpien, wrzesien, pazdziernik, listopad, grudzien};
	
	nazwa miesiac
	
	cout << "miesiac: "; cin >> miesiac; //nie wiem dlaczego tu jest b³ad
	
	
	switch (miesiac)
	{
	case styczen: cout << "31";break;
	case luty: cout << "28";break;
	case marzec: cout << "31";break;
	case kwiecien: cout << "30";break;
	case maj: cout << "31";break;
	case czerwiec: cout << "30";break;
	case lipiec: cout << "31";break;
	case sierpien: cout << "31";break;
	case wrzesien: cout << "30";break;
	case pazdziernik: cout << "31";break;
	case listopad: cout << "30";break;
	case grudzien: cout << "31";break;
	default: cout << "Nie ma takiego miesiaca";
	}
	   
    
}
