#include <iostream>
using namespace std;
int main()
{
	char a[21];
	
	char znak;
	cout << "Podaj ciag znakow (max 20 znakow): ";
	
	cin.getline(a,21);
	cout << "Podaj znak do zaliczenia: ";
	
	cin >> znak;
	int licznik = 0;
	
	int wystopienia[20];
	
	for (int i = 0; i < strlen(a); i++)
	{
		if(a[i] == znak)
	{
	
	wystopienia[licznik] = i;
	licznik ++;
	}
}
cout << "Liczba wystopien znaku" << znak << " :" << licznik << endl;
cout << "Pozycje wystapien:";
for (int i = 0; i < licznik; i++)
{
	cout << wystopienia[i]<<",";
}


	  return 0;
}
 