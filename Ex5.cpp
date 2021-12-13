/*WAP to calculate and print factorial of first 10 numbers.*/
#include<iostream>
using namespace std;
int fact(int n)
{
	int i,fact=1;
 for(i=1;i<=n;i++)
 {
 	fact=fact*i;
	 }
	 return fact;	
}
int main()
{
	int n=10;
	int ans=fact(n);
	cout<<"Factorial of first 10 numbers is "<<ans;
}
