#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool SprawdzCzyParzysta(int a)
{
    if(a%2==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}

int main()
{
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    if(SprawdzCzyParzysta(a))
    {
        cout<<"Liczba "<< a <<" jest parzysta.";
    }
    else
    {
         cout<<"Liczba "<< a <<" jest nie jest parzysta.";
    }
    
    
    return 0;
}
