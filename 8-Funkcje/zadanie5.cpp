#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void DuzaMala(int liczba, int wylosowanaLiczba)
{
    if(liczba == wylosowanaLiczba)
    {
        cout << "Gratulacje! Odgadles liczbe.";
        
    }else if (liczba < wylosowanaLiczba)
    {
        cout << "za malo";
    }else if (liczba > wylosowanaLiczba)
    {
        cout << "za duzo";
    }
}
bool CheckLiczba(int liczba, int wylosowanaLiczba)
{
    if (liczba == wylosowanaLiczba)
    {
        return true;
    }
    return false;
}

int main()
{
    
    srand(time(NULL));
    int wylosowanaLiczba = rand() % 100 + 1;
    int podana;
    bool szuka = false;
    while (!szuka)
    { 
        cout <<endl <<"podaj liczbe: ";
        cin >> podana;
        DuzaMala(podana, wylosowanaLiczba);
        szuka = CheckLiczba(podana, wylosowanaLiczba);
    }

   
    
    
  
    

    return 0;
}