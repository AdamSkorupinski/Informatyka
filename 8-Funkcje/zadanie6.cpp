#include <iostream>
using namespace std;

int GetNumberFromUser()
{
    int pLiczba;
    cout<< endl << "Podaj liczbe: ";
    cin >> pLiczba;
    return pLiczba;
}
int CalculateFactorial(int a)
{
    int silnia = 1;
    for(int i = 2; i <= a; i++)
    {
        silnia *= i;
    }
    return silnia;
}
void DisplayResult(int b, int c)
{
    cout<<"Silnia liczby "<< b <<" wynosi: "<< c;
}

int main()
{
    int podanaLiczba;
    int wynikSilni;
    podanaLiczba = GetNumberFromUser();
    wynikSilni = CalculateFactorial(podanaLiczba);
    DisplayResult(podanaLiczba,wynikSilni);

   
    
    
  
    

    return 0;
}