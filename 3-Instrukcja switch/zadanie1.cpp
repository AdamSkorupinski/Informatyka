#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cout << "Podaj pierwsza liczbe:";
    cin >> a;
    int b;
    cout << "Podaj druga liczbe:";
    cin >> b;
 
    char c;
    cout << "Podaj znak dzialania (+, -, *, /):";
    cin >> c;
 
    switch (c)
    {
    case '+':
        cout << "wynik: " << a + b;
 
        break;
    case '-':
        cout << "wynik: " << a - b;
        break;
 
    case '*':
        cout << "wynik: " << a * b;
        break;
    case '/':
        cout << "wynik: " << a / b;
        break;
 
    default:
        cout << "blad";
        break;
    }
 
   
    return 0;
}