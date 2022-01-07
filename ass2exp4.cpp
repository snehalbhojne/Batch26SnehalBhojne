/*WAP to input Distance between the Cities in Km and Convert it into Meter,Centimeter,Feet and Inches*/
#include<iostream>
using namespace std;

 void meter(float dis)
 {
   cout<<"\n Distance in meter is "<<dis*1000;
 }
  
   void centi(float dis)
   {
       cout<<"\n Distance in centimeter is "<<dis*100000;
   }
  
  void feet(float dis)
  {
      cout<<"\n Distance in feet is "<<dis*3280.84;
  }

  void inches(float dis)
  {
      cout<<"\n Distance in inches is "<<dis*39370.08;
  }
int main()
{
    float dis;
    cout<<"Enter distance:";
    cin>>dis;
   
    meter(dis);
    centi(dis);
    feet(dis);
    inches(dis);
    return 0;
}