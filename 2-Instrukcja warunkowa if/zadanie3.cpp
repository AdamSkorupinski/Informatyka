#include <iostream>
using namespace std;
 
int main()
{
    cout << "Podaj liczbe calkowita: ";
    int a;
    cin >> a;
   
    cout <<endl << "liczba " << a;
    if (a%2==0)
    {
        cout << " jest parzysta."<<endl;
    }else
    {
        cout << " jest nie parzysta."<<endl;
    }
 
    cout << "liczba " << a;
    if (a%3==0)
    {
        cout << "jest podzielna przez 3.";
    }else
    {
        cout << "jest nie podzielna przez 3.";
    }
   
   
 
    return 0;
}