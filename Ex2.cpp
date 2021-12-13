/*WAP to input any number and display the reverse*/
#include<iostream>
using namespace std;
int rev(int no)
{
	int rem,rev=0;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	return rev;
}
int main()
{
	int no;
	cout<<"Enter any Number:";
	cin>>no;
	int ans=rev(no);
	cout<<"Reverse Number:"<<ans;
	
}
