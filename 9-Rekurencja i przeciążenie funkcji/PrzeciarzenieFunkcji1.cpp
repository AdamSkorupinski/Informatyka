#include <iostream>
using namespace std;

float CalculateVolume(float a)
{
    return a*a*a;
}
float CalculateVolume(float a, float b, float h)
{
    return a*b*h;
}
float CalculateVolume(float r, float h)
{
    float pi = 3.1415;
    return pi*(r*r)*h;
}

void DisplayResult(float wynik)
{
    cout << "Objetosc wynosi: "<< wynik;
}

    int
    main()
{

    int wybor;
    float wynik;
    cout << "Wybierz bryle do obliczenia objetosci: " << endl;
    cout << "1 - Szescian (V = a^3)" << endl
         << "2 - Prostopadloscian (V = a * b * h)" << endl
         << "3 - Walec (V = pi * r^2 * h)" << endl;
    ;
    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    switch (wybor)
    {
    case 1:
        cout << "podaj dlugosc boku: ";
        int bok;
        cin >> bok;
        wynik = CalculateVolume(bok);
        break;

    case 2:
        cout << "podaj dlugosc: ";
        int dlugosc;
        cin >> dlugosc;
         cout << "podaj szerokosc: ";
        int szerokosc;
        cin >> szerokosc;
         cout << "podaj wysokosc: ";
        int wysokosc;
        cin >> wysokosc;
        wynik = CalculateVolume(dlugosc,szerokosc,wysokosc);
        break;

    case 3:
        cout << "podaj promien podstawy: ";
        int promien;
        cin >> promien;
        cout << "podaj wysokosc: ";
        cin >> wysokosc;
        wynik = CalculateVolume(promien, wysokosc);
        break;

    default:
        cout << endl
             << "! Podano zla opcje !" << endl;
        break;
    }
    DisplayResult(wynik);

    return 0;
}