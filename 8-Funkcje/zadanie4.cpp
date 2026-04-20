#include <iostream>
using namespace std;
 
int tab[5];
void GetArrayFromUser()
{
    cout<<"podaj 5 liczb calkowitych:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Podaj liczbe nr "<< i+1 << ": ";
        cin >> tab[i];
    } 
}

int FindMaxValue(int a[])
{
    int najwiekrza= a[0];

    for (int i = 1; i < 5; i++)
    {
        if(najwiekrza < a[i])
        {
            najwiekrza = a[i];
        }
       
    }
    return najwiekrza;
}

void DisplayResult(int a)
{
    cout <<"Najwieksza liczba: "<< a;
}

int main()
{
 
    GetArrayFromUser();
    int naj = FindMaxValue(tab);
    DisplayResult(naj);

    return 0;
}