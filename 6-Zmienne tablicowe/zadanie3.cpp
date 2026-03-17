#include <iostream>
using namespace std;
 
int main()
{
 
    int a[10];
    cout<<"podaj 10 liczb calkowitych:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj liczbe nr "<< i+1 << ": ";
        cin >> a[i];
    }
 
    int najmniejsza = a[0];
    for (int i = 1; i < 10; i++)
    {
        if(najmniejsza > a[i])
        {
            najmniejsza = a[i];
        }
       
    }
    cout <<"Najmniejsza liczba to: "<< najmniejsza;
    return 0;
}