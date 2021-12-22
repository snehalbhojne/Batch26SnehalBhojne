/*WAP to swap the two numbers without using temperory variable.*/
#include<iostream>
4
using namespace std;


   void swapNumbers(int &a,int &b)
   {
       a=(a*b);
       b=(a/b);
       a=(a/b);
       
   }
int main()
{
    int a,b;
    cout<<"\n Enter a:";
    cin>>a;
    cout<<"\n Enter b:";
    cin>>b;
    swapNumbers(a,b);
    cout<<"\n After Swapping:";
    cout<<"\n a:"<<a;
    cout<<"\n b:"<<b;
}
