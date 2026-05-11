#include <iostream>
using namespace std;


int CalculatePowerRecursive(int a, int b)
{
    
    if(b == 0)
    {
        return 1;
    }
    else
    {
        return a * CalculatePowerRecursive(a, b-1);
    }
    
}
void DisplayResult(int b, int c, int d)
{
    cout<< b <<" do poegi "<< c <<" wynosi: "<< d;
}

int main()
{
    int podanaLiczba;
    int potega;
    int wynikP;



    cout<<"Podaj liczbe podstawowa: ";
    cin >> podanaLiczba;
    
    cout<< "Podaj wykladnik: ";
    cin >> potega;


    wynikP = CalculatePowerRecursive(podanaLiczba,potega);
    DisplayResult(podanaLiczba,potega,wynikP);


    return 0;
}