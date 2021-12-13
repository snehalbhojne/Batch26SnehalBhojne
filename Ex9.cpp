/*WAP to display ASCII value of any character.
 [ASCII = American Standard Code for Information Interchange] 
[a to z = 97 to 122 & A to Z = 65 to 90]*/
#include<iostream>
using namespace std;
int disASCII(char ch)
{
	int z= ch;
	return z;
}
int main()
{
	char ch;
	cout<<"Enter any character:";
	cin>>ch;
	int ans=disASCII(ch);
	cout<<"ASCII Value = "<<ans;
}
