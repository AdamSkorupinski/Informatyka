#include <iostream>
using namespace std;

int GetNumberFromUser()
{
    int pLiczba;
    cout<< endl << "Podaj liczbe: ";
    cin >> pLiczba;
    return pLiczba;
}
int CalculateSumRecursive(int a)
{
    
    if(a == 1)
    {
        return 1;
    }
    else
    {
        return a + CalculateSumRecursive(a-1);
    }
    
}
void DisplayResult(int b, int c)
{
    cout<<"Suma liczby "<< b <<" wynosi: "<< c;
}

int main()
{
    int podanaLiczba;
    int wynikSilni;
    podanaLiczba = GetNumberFromUser();
    wynikSilni = CalculateSumRecursive(podanaLiczba);
    DisplayResult(podanaLiczba,wynikSilni);

   
    
    
  
    

    return 0;
}