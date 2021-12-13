/*WAP to find the maximum number amongst three numbers*/
#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
	int max=a>b?(a>c?a:c):(b>c?b:c);
	return max;
}
int main()
{
	int a,b,c;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	cout<<"Enter c:";
	cin>>c;
	int ans=max(a,b,c);
	cout<<"Maximum Amongst Three is "<<ans;
}
