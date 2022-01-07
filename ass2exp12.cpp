/*WAP to declare a class Hardware. Input hardware name and Price.
 Pass the Object to a function showHardware() and display the Details [Passing Object as Function Argument]*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Hardware
 {
   public:
   char name[20];
   double price;
   void add( char name[],double price)
   {
       strcpy(this->name,name);
       this->price=price;
   }
 };
 void showHardware(Hardware h)
   {
       cout<<"\n "<<h.name<<" "<<h.price;
   }

 int main()
 {
     Hardware h;
     h.add("Printer",89000);
     showHardware(h);
     return 0;
 }
