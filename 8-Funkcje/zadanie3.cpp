#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
string GetTextFromUser()
{
    string te;
    cout << "Podaj ciag znakow: ";
    getline(cin, te);
    return te;
}

string ReverseString(string a)
{
    string odwrot = a;
    int licz = 0;
    for (int i = a.length()-1; i >= 0 ; i--)
    {
        odwrot[licz] = a[i];
        licz++;
    }
    return odwrot;
}

void DisplayResult(string a)
{
    cout << "Odwrocony ciag: "<< a;
}
int main()
{
    string tekst;
    tekst = GetTextFromUser();
    tekst = ReverseString(tekst);
    
    DisplayResult(tekst);
    

    return 0;
}