#include <iostream>
using namespace std;
 
int main()
{
 
    int a[5];
    cout<<"wprowadz 5 liczb calkowitych:"<<endl;
    for (int i = 0; i < 5; i++)
    {
       
        cin >> a[i];
    }
 
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++)
    {
       
        if (a[i] < 0)
        {
            cout << 0 << ", ";
        }
        else
        {
            cout << a[i] << ", ";
        }
    }
 
    return 0;
}