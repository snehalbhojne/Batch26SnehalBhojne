/*WAP to find the addition of numbers between the given range.*/
#include<iostream>
using namespace std;
int add(int n1,int n2)
{
	int i,sum=0;
	for(i=n1;i<=n2;i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int n1,n2;
	cout<<"Enter values of n1 and n2:";
	cin>>n1>>n2;
	int ans=add(n1,n2);
	cout<<"Addition of numbers in the given range is "<<ans;
}
