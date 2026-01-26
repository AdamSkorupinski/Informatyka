
  #include <iostream>

using namespace std;
 
int main()
{
   int a;
   cout <<"Podaj liczbe wierszy: ";
   cin >> a;
 
   int b;
   cout <<"Podaj liczbe kolumn: ";
   cin >> b;

   cout <<endl;
 
   int c = 1;
   for(int i =0; i < a; i++)
   {
       for(int j = 0; j < b; j++)
       {
       
        cout<<c<<"      ";
        c+=2;
       }
       cout<<endl;
   }
   
   
   return 0;
}