#include <iostream>
using namespace std;
 
int main()
{
 
    int a;
    cout << "Podaj liczbe N: ";
    cin >> a;
 
    int b = 2;
    cout << "Liczby parzyste od 2 do" << a<<": "<<endl;
   
    while (a>=b)
    {
        cout<<b<<endl;
        b+=2;
       
 
    }
   
   
    return 0;
}