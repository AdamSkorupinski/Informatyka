#include <iostream>
using namespace std;
 
int main()
{
   int n;
   cout <<"Podaj liczbe N: ";
   cin >> n;
   int w = 0;
   for(int i =0; i <= n; i++)
   {
    w+=i;
   }
   cout << "Suma liczb od 1 do "<<n <<" wynosi: "<<w;
 
}
 