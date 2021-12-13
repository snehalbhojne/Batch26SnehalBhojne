/*WAP to create a function searcharray() which finds the array value is present or not.*/
#include<iostream>
using namespace std;
int searcharray(int *a,int user_input)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(user_input==a[i])
		return user_input;
		else
		return 0;
	}
}
int main()
{
	int a[5]={34,78,15,59,26};
	int user_input;
	cout<<"Enter value to search:";
	cin>>user_input;
	searcharray(a,user_input);
	cout<<ans<<"found in the array.";
}
