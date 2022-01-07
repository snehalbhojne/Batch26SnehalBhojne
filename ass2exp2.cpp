/*WAP to input two integer numbers and display their addition*/
#include<iostream>
using namespace std;
int add(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    int ans=add(n1,n2);
    cout<<"Addition ="<<ans;
    return 0;
}