#include <iostream>
#include <random>
using namespace std;

int main()
{

    const int min = 1, max = 10, N = 5;
    int tab[N];

    default_random_engine generator;
    uniform_int_distribution<int> distribution(min, max);
    auto losowaCyfra = distribution(generator);
    cout << losowaCyfra;
    
   /* for (int i = 0; i < N; i++)
    {
        auto losowaCyfra = distribution(generator);
        tab[i] = losowaCyfra;
    }
    */

    for (int i = 0; i < N; i++)
        cout <<"tab[" << i <<"]"<<"=" << tab[i] << endl;  //wypisuje tabele

   
        
       





}

