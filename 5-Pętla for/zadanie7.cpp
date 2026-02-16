  #include <iostream>
using namespace std;
 
int main()
{
   int a;
   cout <<"Podaj szerokosc: ";
   cin >> a;
   
   int b;
   cout <<"Podaj wysokosc: ";
   cin >> b;
 
   cout <<endl;
 
   for(int i =1; i <= b; i++)
   {
   
       for(int j = 1; j <=a; j++)
       {
        if(i == 1|| i == b)
        {
            cout <<"-";
        }else if(j == 1|| j == a)
        {
            cout<<"|";
        }
        else
        {
            if((i+j)%2==0)
            {
                cout<<"#";
            }else
            {
               cout<<"*";
            }
           
        }    
 
       }
       cout<<endl;
   }
   
   
   return 0;
}