#include <iostream>
using namespace std;

int GetNumberFromUser()
{
    int pLiczba;
    cout<< endl << "Podaj liczbe elementow: ";
    cin >> pLiczba;
    return pLiczba;
}
int CalculateFibonacciRecursive(int a)
{
    
    if(a == 1 || a == 2)
    {
        return 1;
    }
    else
    {
        return CalculateFibonacciRecursive(a-1) + CalculateFibonacciRecursive(a-2);
    }
    
}
void DisplayFibonacciSequence(int b)
{
    cout<<"Ciag fibonaciego: ";
    for(int i = 1; i <= b; i++)
    {
        cout << CalculateFibonacciRecursive(i) << ", ";
    }
}

int main()
{
    int podanaLiczba;
    
    podanaLiczba = GetNumberFromUser();
    DisplayFibonacciSequence(podanaLiczba);

   
    
    
  
    

    return 0;
}