#include <iostream>
using namespace std;
 
int main()
{
 
    int a[2][3];
    cout << "podaj 9 liczb calkowitych do macierzy 3x3:" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Podaj liczbedla wiersza " << i+1 << ", " << "kolumny "<< j+1<<": ";
            cin >> a[i][j];
        }
    }
 
    int tr[3][2];
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            tr[i][j] = a[j][i];
        }
    }
 
 
    cout<<endl << "Transponowana macierz:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << tr[i][j] <<" ";
        }
        cout<<endl;
    }
 
 
    return 0;
}