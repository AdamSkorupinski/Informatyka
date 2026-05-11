#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool SprawdzLiczbe(int *wtab, int r, int *wlos)
{   
    for(int i = 0; i < r; i++)
    {
        if(wtab[i] == *wlos)
        {
            cout <<"Zgadles!";
            return true;
        }    
    }
    cout << "Nie zgadles";
    return false;
}

void LosujTablice(int *wtab, int r, int min, int max)
{
    cout<< "Tablica: ";
    for(int i = 0; i < r; i++)
    {
        wtab[i] = min + rand() % (max - min + 1) ;
        cout <<wtab[i] << " ,";
    }


}

int main()
{
    srand( time( NULL ) );
    int proby = 0;

    int rozmiar = 10;

    int tab[rozmiar];
    
    int wp;
    int wk;
    cout <<"Wartosc poczatkowa: ";
    cin >>wp;
    cout <<"Wartosc koncowa: ";
    cin >>wk;
    LosujTablice(tab, rozmiar,wp,wk);
    int los;
    do
    { 
    proby ++;
    cout<<endl << "Podaj liczbe: "; 
    cin >> los;
    }
    while(!SprawdzLiczbe(tab,rozmiar,&los));

    cout<<endl<<"Zgadles za " << proby<<" razem.";
   
    return 0;
}