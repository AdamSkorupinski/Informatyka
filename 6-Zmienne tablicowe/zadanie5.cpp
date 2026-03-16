#include <iostream>
using namespace std;
 
int main()
{
 
    int a[3][3];
    cout << "podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Podaj liczbe dla wiersza " << i+1 << ", " << "kolumny "<< j+1<<": ";
            cin >> a[i][j];
        }
    }
 
    int srednia = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            srednia += a[i][j];
        }
    }
    cout << endl
         << "Srednia liczb:  " << srednia / 9;
    return 0;
}