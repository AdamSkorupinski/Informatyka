#include <iostream>
using namespace std;
int main()
{
	char a[21];
	cout << "Podaj ciag znakow (max 20 znakow): ";
	cin.getline(a,21);
	for (int i = 0; i < strlen(a); i++)
	{
		if(a[i] =='a')
		{
			a[i] ='o';
		}
	}
	cout << "Wprowadzony ciag znakow: " << a;
	  return 0;
}
 