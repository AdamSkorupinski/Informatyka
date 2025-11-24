#include <iostream>
using namespace std;
 
int main()
{
int n;
cout << "Podaj liczbe N: ";
cin >> n;
int suma = 0;
int licznik = 0;
 
while (n>licznik)
{
licznik++;
suma+=licznik;
}
 
 
 
 
cout <<endl<< "Suma liczb naturalnych do " <<n <<": "<< suma;
 
 
 
 
return 0;
}