#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cout << "Podaj liczbe godzin parkowania: ";
    cin >> a;
 
    char b;
    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> b;
    switch (b)
    {
    case 'S':
        cout << "Oplata za parkowanie: " << a * 5 << "zl";
        break;
 
    case 'M':
        cout << "Oplata za parkowanie: " << a * 3 << "zl";
        break;
 
    case 'A':
        cout << "Oplata za parkowanie: " << a * 10 << "zl";
        break;
    default:
        cout << "blad";
        break;
    }
 
    return 0;
}