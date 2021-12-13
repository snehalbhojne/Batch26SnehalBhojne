/*WAP to display the array values in Ascending order*/
#include<iostream>

using namespace std;
int arrange(int *z)
{
	int i,j,t,d;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(z[i]>z[j])
			{
				t=z[i];
				z[i]=z[j];
				z[j]=t;
				
			}
		}
	}
	cout<<"Sorted array:";
	for(d=0;d<5;d++)
	{
		cout<<z[d]<<" ";
	}
	
}
int main()
{
	int z[5]={12,20,14,56,40};
	arrange(z);
	
}
