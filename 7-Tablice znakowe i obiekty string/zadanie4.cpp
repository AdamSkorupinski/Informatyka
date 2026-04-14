#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
int main()
{
    char a[21];
    char odwrot[21];
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(a,21);
    int licz = 0;

    for (int i = strlen(a)-1; i >= 0 ; i--)
    {
        odwrot[licz] = a[i];
        licz++;
    }
    odwrot[strlen(a)] = '\0';
    cout <<"Odwrocony ciag: "<< odwrot;

    return 0;
}