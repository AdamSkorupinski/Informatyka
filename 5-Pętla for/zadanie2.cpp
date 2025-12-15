#include <iostream>
using namespace std;
 
int main()
{
   int n;
   cout <<"Podaj liczbe N: ";
   cin >> n;
 
   cout <<endl<< "Kwadraty liczb od 1 do " <<n <<":"<<endl;
   for(int i =1; i <= n; i++)
   {
        cout << i <<"^2 = "<< i*i<<endl;
   }
   
   
   return 0;
}
