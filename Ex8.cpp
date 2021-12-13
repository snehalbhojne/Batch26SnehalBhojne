/*WAP to display the minimum value among the array values*/
#include<iostream>
using namespace std;

int min(int *a)
{
	int i,min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
int main()
{
  int a[5]={20,43,21,15,68};
  int ans=min(a);
  cout<<"Min value of Array is "<<ans;	
}
