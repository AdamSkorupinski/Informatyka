#include <iostream>
using namespace std;
 
int main()
{
    int a;
    char b;
    do
    {
       
        cout << endl << "Podaj liczbe: ";
        cin >> a;
        cout << "podales liczbe: " << a;
        cout << endl << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
       
        cin >> b;
    } while (b=='t');
    cout << "Dziekuje za wprowadzenie liczb!";
 
    return 0;
}