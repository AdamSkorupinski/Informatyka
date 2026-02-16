#include <iostream>
using namespace std;
 
int main()
{
    int wynik = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int f = 0; f <= 9; f++)
            {
                if (j != i && f != j && f != i)
                {
                    cout << i << j << f <<endl;
                    wynik++;
                }
            }
        }
    }
    cout << endl
         << "Liczb bez powtarzajacych sie cyfr: " << wynik;
    return 0;
}