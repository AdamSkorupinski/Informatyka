#include <iostream>
using namespace std;
 
int main()
{
    int a;
    cout << "Podaj szerokosc: ";
    cin >> a;
 
    int b;
    cout << "Podaj wysokosc: ";
    cin >> b;
 
    cout << endl;
    int margin = 1;
    for (int i = 1; i <= b; i++)
    {
 
        for (int j = 1; j <= a; j++)
        {
            if (j < margin || a -margin +1 < j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        margin++;
        cout << endl;
    }
 
    return 0;
}