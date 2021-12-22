/*WAP to perform addition,subtraction,multiplication and division using pointer variable.*/
#include<iostream>
using namespace std;
int addition(int &a,int &b)
{
    return a+b;
}
int subtraction(int &a,int &b)
{
    return a-b;
}
int multiplication(int &a,int &b)
{
   return a*b;
}
int division(int &a,int &b)
{
    return a/b;
}

int main()
{
   int a,b;
   a=10;
   b=5;
   int add=addition(a,b);
   int sub=subtraction(a,b);
   int mul=multiplication(a,b);
   int div=division(a,b);
    cout<<"\n a="<<a<<"\n b="<<b;
    cout<<"\n Addition="<<add;
    cout<<"\n Subtraction="<<sub;
    cout<<"\n Multiplication="<<mul;
    cout<<"\n Division="<<div;
}