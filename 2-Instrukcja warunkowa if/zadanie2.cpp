#include <iostream>
using namespace std;
 
int main()
{
	  cout << "podaj wage (w kg): ";
    float waga;
    cin >> waga;
    cout << "podaj wzrost (w metrach): ";
    float wzrost;
    cin >> wzrost;
 
    float bmi = waga/(wzrost*wzrost);    
    cout << "Twoje BMI wynosi: " << bmi << endl;
 
    cout << "Twoj stan wagowy:  ";
        if (bmi < 18.5)
        {
            cout << "Niedowaga";
        }
        else if (bmi < 24.9)
        {
            cout << "W normie";
        }
        else if (bmi < 29.9)
        {
            cout << "Nadwaga";
        }
        else
        {
            cout << "Otyłosc";
        }
       
 
    return 0;
}