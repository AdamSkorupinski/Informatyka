#include <iostream>
using namespace std;
 
int main()
{
	cout << endl << "zadanie 6. " << endl;
    int aaa;
    int bbb;
    cout <<"podaj pierwsza liczbe: ";
    cin >>aaa;
    cout <<"podaj druga liczbe: ";
    cin >>bbb;
    int sum = aaa+bbb;
 
    cout<< "suma:" <<sum<<endl;
    cout<<"Suma jest liczba";
 
    if(sum%2 ==0 )
    {
        cout<<" parzysta.";
    }else
    {
        cout<<" nieparzysta.";
        /* code */
    }
   
 
    return 0;
}