#include <iostream>
using namespace std;

void ObliczSume(int *wtab,int r, int *wsuma)
{
    *wsuma = 0;
    for(int i = 0; i < r; i++)
    {
        *wsuma = *wsuma + wtab[i];
    }
}

void Modyfikacja(int *wtab, int r)
{
    cout << endl;
    for(int i = 0; i < r ;i++)
    {
        cout<< "Podaj nowa wartosc dla elementu "<< i <<": ";
        cin >> wtab[i];   
    }
    cout << "Nowa tablica: "<<endl;
    for(int i = 0; i < r ;i++)
    {
        cout << wtab[i]<< " ";
        
    }
    cout<<endl;

}

int main()
{
    int tab[4] = {5, 10, 15, 20};
    int suma;
    ObliczSume(tab,4, &suma);
    cout << "Suma elementow tablicy: "<< suma;
    Modyfikacja(tab,4);

    ObliczSume(tab,4, &suma);
    cout << "Suma elementow tablicy: "<< suma;
   
    return 0;
}