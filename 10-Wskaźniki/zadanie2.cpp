#include <iostream>
using namespace std;

void FindMinMax(float *wsk, int r,float *wmin, float *wmax)
{
    *wmin = wsk[0];
    *wmax = wsk[0];
    cout <<"Tablica: ";
    for (int i = 0; i < r ; i++ )
    {
        cout << wsk[i]<<" ";
        if(wsk[i] < *wmin)
        {
            *wmin = wsk[i];
        }
        if(wsk[i] > *wmax)
        {
            *wmax = wsk[i];
        }
    }
}

int main()
{
    float tab[10] = {1.5, -3.2, 4.8, 7.0, -1.1, 0.0, 3.3, -6.6, 8.9, 2.2};
    float min;
    float max;

    FindMinMax(tab,10,&min,&max);
    cout << endl <<"Najwieksza liczba: "<< max;
    cout << endl <<"Najmniejsza liczba :"<< min;
    return 0;
}