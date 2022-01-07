/*WAP to declare a class Accessories. Input accno, name ,price ,warranty in months and display using the
 function viewAccessories(). Input 3 different accessories and apply discount of 5%*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Accessories
 {
    public:
    int accno;
    char name[100];
    float price;
    int warranty;
    void add(int accno, char name[], float price, int warranty)
    {
        this->accno=accno;
        strcpy(this->name,name);
        this->price=price;
        this->warranty=warranty;
  
    }
    void display()
    {
     cout<<"\n "<<this->accno<<" "<<this->name<<" "<<this->price<<" "<<this->warranty;
    }
 };
 int main()
 {
   Accessories a,b,c;
   a.add(101,"Mouse",780.0f,3);
   b.add(302,"Speaker",1590.5f,4);
   c.add(504,"Keyboard",3456.4f,6);

   a.display();
   b.display();
   c.display();

   cout<<"\n After Applying Discount of 5%";

   a.price=a.price*0.05;
   b.price=b.price*0.05;
   c.price=c.price*0.05;

   a.display();
   b.display();
   c.display();
    return 0;
 }