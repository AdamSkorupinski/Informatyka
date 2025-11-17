#include <iostream>
using namespace std;
 
int main()
{
 
    cout << "Podaj wynik egzaminu (liczba punktow): ";
    int wynik;
    cin >> wynik;
 
   
 
    if (wynik < 0)
    {
        cout << "podaj cos wiekrzego od 0";
    }
    else if (wynik > 100)
    {
        cout << "podaj cos mniejszego od 100";
    }
    else
    {
        cout << "Ocena: ";
        if (wynik < 49)
        {
            cout << "niedostateczna";
        }
        else if (wynik < 69)
        {
            cout << "dostateczna";
        }
        else if (wynik < 84)
        {
            cout << "dobra";
        }
        else if (wynik < 99)
        {
            cout << "bardzo dobra";
        }
        else
        {
            cout << "celujaca";
        }
    }
 
    return 0;
}