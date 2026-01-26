  #include <iostream>
using namespace std;
 
int main()
{
   int a;
   cout <<"Podaj liczbe N: ";
   cin >> a;
 
 
   cout <<endl;
 
   for(int i =1; i <= a; i++)
   {
       for(int j = 1; j <= a; j++)
       {
            cout<< i<<" * "<<j<<" = "<<i*j<<endl;    
   
       }
       cout<<endl;
   }
   
   
   return 0;
}