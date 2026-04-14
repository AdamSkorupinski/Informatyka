#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int Suma(int a, int b)
{
    return a + b;
}
int Roznica(int a, int b)
{
    return a - b;
}
int Iloczyn(int a, int b)
{
    return a * b;
}
float Iloraz(float a, float b)
{
    return a / b;
}

int main()
{
    int opcja;
    bool dziala = true;

    while (dziala)
    {

        cout << "Wybierz funkcje:" << endl
             << "1. Suma" << endl
             << "2. Roznica" << endl
             << "3. Iloczyn" << endl
             << "4. Iloraz" << endl
             << "0. Wyjscie" << endl
             << "Wybrana funkcja:";
        cin >> opcja;
        int a;
        int b;

        switch (opcja)
        {
        case 0:
            dziala = false;
            break;
        case 1:
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj droga liczbe: ";
            cin >> b;
            cout << "wynik: " << Suma(a, b) << endl
                 << endl;
            ;
            break;
        case 2:
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj droga liczbe: ";
            cin >> b;
            cout << "wynik: " << Roznica(a, b) << endl
                 << endl;
            ;
            break;
        case 3:
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj droga liczbe: ";
            cin >> b;
            cout << "wynik: " << Iloczyn(a, b) << endl
                 << endl;
            ;
            break;
        case 4:
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj droga liczbe: ";
            cin >> b;
            if (b != 0)
            {
                cout << "wynik: " << Iloraz(a, b) << endl
                     << endl;
                ;
            }
            else
            {
                cout<<endl << "nie dziel przez zero!" << endl
                     << endl;
            }

            break;

        default:
            cout << endl
                 << "zla opcja! podaj jeszce raz" << endl
                 << endl;
            break;
        }
    }

    return 0;
}
