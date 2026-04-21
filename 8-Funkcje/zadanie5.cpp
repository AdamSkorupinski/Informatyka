#include <iostream>
using namespace std;
 
 int tab[5];
void GetArrayFromUser()
{
    cout<<"podaj liczbe:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj liczbe: "<< i+1 << ": ";
        cin >> tab[i];
    } 
}
 
 
 
 
 
 
 
 
 
 
 
     return 0;
}