#include <iostream>
using namespace std;
 
int main()
{
 
    int a[10];
    cout<<"podaj 10 liczb calkowitych:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Podaj liczbe nr "<< i+1 << ":";
        cin >> a[i];
    }
 
    int suma = 0;
   
    cout <<"Liczby parzyste: ";
    for (int i = 1; i < 10; i++)
    {
        if(a[i]%2==0)
        {
            cout << a[i]<<",";
            suma += a[i];
           
        }
       
    }
    cout<<endl <<"Suma liczb parzystych:  "<< suma;
    return 0;
}