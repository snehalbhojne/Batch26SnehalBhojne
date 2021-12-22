/*WAP to create a function getdata() which contains the details of Vehical as 
vehical number,Vehical name,Average and fuel capacity. 
Display those vehicals which has avg>=15 km and fuel capacity is greater than 10 ltrs*/
#include<iostream>
#include<string.h>
using namespace std;
class Vehicle
{
	public:
	int vno;
	char vname[40];
	int avg;
	int fucap;
	void getdata(int vno,char vname[],int avg,int fucap)
	{
		this->vno=vno;
		strcpy(this->vname,vname);
		this->avg=avg;
		this->fucap=fucap;
	}
	void show()
	{
		cout<<endl<<this->vno<<" \t"<<this->vname<<"\t"<<this->avg<<"\t"<<this->fucap;
	}
	
};
 Vehicle displayVehicle(Vehicle v[])
 {
	 int pos=0;
 	for(int i=0;i<3;i++)
 	{
 	if(v[i].avg>=15 && v[i].fucap>10)
 	pos=i; 
    }
	return v[pos];
 }
int main()
{
	Vehicle v[3];
	v[0].getdata(102,"Aura",13,8);
	v[1].getdata(104,"i20",22,11);
	v[2].getdata(106,"Duster",10,9);
	for (int i=0;i<3;i++)
	{
		v[i].show();
	}

	Vehicle V=displayVehicle(v);
	cout<<"\n Vehicles with desired values :";
	V.show();
	return 0;
	
}
