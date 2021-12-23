/*WAP to input price,qty and create a fuction calculate() with arguments 
which accepts the price and qty and calculates Bill amount. 
Return the bill ammount. Display Total*/

#include<iostream>
#include<string.h>
using namespace std;
  void show(char prodName[][20],int price[],int qty[])
  {
  	for(int i=0;i<3;i++)
  	{
  		cout<<"\n"<<prodName[i]
  		     <<"\t"<<price[i]
  		     <<"\t"<<qty[i];
	  }
  }
  int calculate(int price[],int qty[])
  {
  	 int t_amt;
  	 int total=0;
  	 for(int j=0;j<3;j++)
  	 {
  	 	t_amt=price[j]*qty[j];
  	 	total=total+t_amt;
	   }
	   return total;
  }
int main()
{
	char prodName[3][20]={"Mouse","Speaker","Pendrive"};
	int price[3]={350,2700,568};
	int qty[3]={1,2,3};
	show(prodName,price,qty);
	int ans=calculate(price,qty);
	 cout<<"\n Total bill is:"<<ans;
}