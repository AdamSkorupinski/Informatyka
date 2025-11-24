#include <iostream>
using namespace std;
 
int main()
{
   int a;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> a;
    int wynik =0;
    int b=1;
 
    do
    {
        if(b%2==0)
        {
            wynik++;
        }
        b++;
       
    }while(a >= b);
 
 
    cout << "Liczba liczb parzystych od 1 do "<< a<<  " wynosi: " << wynik;
    return 0;
}