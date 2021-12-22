/*WAP to display even and odd values from the given range.*/
#include<iostream>
using namespace std;

void even(int n1,int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        if(i%2==0)
        cout<<" "<<i;
    }
    cout<<"\n";
} 
void odd(int n1, int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        cout<<" "<<i;
    }
    cout<<"\n";
}
int main()
{
 int n1,n2;
 cout<<"\n Enter the range:";
 cin>>n1>>n2;
 cout<<"Even Numbers are:";
 even(n1,n2);
 cout<<"Odd Numbers are:";
 odd(n1,n2);

}