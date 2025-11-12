#include <iostream>
using namespace std;
 
int main()
{
// 5
    cout << endl<< "zadanie 5. " << endl;
 
         int aa;
         int bb;
 
         cout <<"podaj pierwszą liczbę: ";
         cin >>aa;
         cout <<"podaj drugą liczbę: ";
         cin >>bb;
         cout <<"Suma: "<< aa+bb<<endl;
 
         cout <<"Iloczyn: "<< aa*bb<<endl;
 
         if(bb!= 0)
         {
            cout <<"Iloraz:" <<aa/bb<<endl;
         }else
         
            cout <<"nie dziel przez zero "<<endl;
         }