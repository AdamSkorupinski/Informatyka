#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> a;
 
    char c;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> c;
 
    switch (c)
    {
    case 'K':
        cout << "temperatura w Kelwinach (K): " << a + 273.15;
 
        break;
    case 'F':
        cout << "Temperatura w stopniach Fahrenheita: (F) " << (a * 9/5) + 32;
        break;
 
    default:
        cout << "blad";
        break;
    }
 
   
    return 0;
}