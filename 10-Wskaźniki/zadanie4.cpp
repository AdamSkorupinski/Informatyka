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
    int tab[10];
    LosujTablice(tab, 10,0,50);
    int los;
    do
    { 
    proby ++;
    cout<<endl << "Podaj liczbe: "; 
    cin >> los;
    }
    while(!SprawdzLiczbe(tab,10,&los));

    cout<<endl<<"Zgadles za " << proby<<" razem.";
   
    return 0;
}