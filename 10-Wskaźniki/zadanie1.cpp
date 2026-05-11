#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    int *wa = &a;
    int *wb = &b;

    cout << "Przed modyfikacja: " << endl << "a = "<< a << endl << "b = "<< b;
   
    *wa = 15;
    *wb = 20;
    cout<<endl<<endl << "Po modyfikacji: " << endl << "a = "<< a << endl << "b = "<< b;
    return 0;
}