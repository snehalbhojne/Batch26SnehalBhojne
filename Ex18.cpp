/*WAP to create a class population with data members city and 
totalpopulation & member functions getdata() with arguments which accepts the values.
 Create 3 objects and Display the name of city which has maximum number of population*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Population
 {
 	public:
 	char cityname[20];
 	double pop;
 	
 	void getdata(char cityname[],long pop)
 	{
 	 strcpy( this->cityname,cityname);
	  this->pop=pop;	
	 }
	 
	 void show()
	 {
	 	cout<<endl<<cityname<<"\t"<<pop;
	 }
 };
 int main()
 {
   	Population p1,p2,p3;
   	p1.getdata("Sangli",34000);
   	p2.getdata("Osmanabad",32000);
   	p3.getdata("Kolhapur",38000);
   	
   	p1.show();
   	p2.show();
   	p3.show();
   	
   	if(p1.pop>p2.pop&&p1.pop>p3.pop)
   	cout<<endl<<p1.cityname<<" has max population";
   	else if(p2.pop>p3.pop)
   	cout<<endl<<p2.cityname<<" has max population";
   	else
   	cout<<endl<<p3.cityname<<"  has max population";
   	
  return 0;	
 }
      
	 
 
