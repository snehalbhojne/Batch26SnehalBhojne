#include<iostream>
#include<string.h>
using namespace std;
class Flight
{
    private:
    int journeyTime;
    int distance;
    public:
    int flightId;
    char flightName[20];
     void addFlight(int flightId,char flightName[],int journeyTime,int distance)
     {
          int r=validateFlight(flightId,flightName,journeyTime,distance);
          if(r=1)
        {
            this->flightId=flightId;
         strcpy(this->flightName,flightName);
         this->journeyTime=journeyTime;
         this->distance=distance;
        }
        if(r=0)
        {
          flightId=flightId;
          strcpy(flightName,flightName);
          journeyTime=journeyTime;
          distance=distance;
        }

     }
        int validateFlight(int flightId,char flightName[],int journeyTime,int distance)
          {
              char s[4];
              strrev(this->flightName);
              strncpy(s,this->flightName,3);
              strrev(s);
              if(flightId>101 && flightId<300 && strcmp(s,"jet")==0 && journeyTime>1 && journeyTime<8 && 
              distance>200 && distance<1500) 
              return 1;
              else
              return 0;
          

     }
     
     void showFlight()
     {
       cout<<endl<<this->flightId<<"\t"<<this->flightName<<"\t"<<this->journeyTime<<"\t"<<this->distance;
     }
};
  *char compare(Flight f1,Flight f2,Flight f3,Flight f4,Flight f5);
  {
   if(f1.distance>500)
   return f1.flightName;
   else if(f2.distance>500)
   return f2.flightName;
   else if(f3.distance>500)
   return f3.flightName;
   else if(f4.distance>500)
   return f4.flightName;
   else if(f5.distance>500)
   return f5.flightName;
   else
   return "";
  }
  
int main()
{
   Flight f1,f2,f3,f4,f5;
   f1.addFlight(103,"AirIndia",3,800);
   f2.addFlight(190,"Spicejet",4,900);
   f3.addFlight(205,"Airjet",5,670);
   f4.addFlight(168,"Indiajet",2,400);
   f5.addFlight(238,"Hellojet",6,560);
   f1.showFlight();
   f2.showFlight();
   f3.showFlight();
   f4.showFlight();
   f5.showFlight();
   char f[20] = compare( f1, f2, f3, f4, f5);
    return 0;
    
}