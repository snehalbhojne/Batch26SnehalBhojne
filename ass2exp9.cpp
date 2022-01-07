/*WAP to declare a class Temperature and display Temperature in Centigrade and Fahrenheit*/
#include<iostream>
using namespace std;
class Temperature
{
    public:
    float centi,fah;
   
};
 void convert(float tcenti,float tfah)
    {
        cout<<"\n Centigrade to fahrenheit :"<<(tcenti*1.8)+32;
        cout<<"\n Fahrenheit to Centigrade :"<<(tfah-32)/1.8;
    }

int main()
 {
    Temperature centi;
    float tcenti;
   cout<<"Enter Temp in Centi:";
   cin>>tcenti;

   Temperature fah;
   float tfah;
   cout<<"Enter Temp in Fah:";
   cin>>tfah;
   convert(tcenti,tfah);
   return 0;
 }
