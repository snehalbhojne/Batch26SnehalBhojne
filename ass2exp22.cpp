/*WAP to declare a constructor class as BookShop.
 Input Shop Name, Book types and Qtys. Display them using a function*/
 #include<iostream>
 #include<string.h>
  using namespace std;
 class BookShop
 {
   public:
   char shopname[200];
   char booktype[70];
   int qty;
   
   BookShop()
   {
      
      strcpy(shopname,"A New Chapter");
       strcpy(booktype,"Fictional");
       qty=4;
     
   }
   BookShop(char shopname[],char booktype[],int qty)
   {
      strcpy(this->shopname,shopname);
       strcpy(this->booktype,booktype);
       this->qty=qty;
   }
   void show()
   {
       cout<<"\n Shop Name: "<<shopname<<"\t BookType: "<<booktype<<"\t Quantity: "<<qty;
   }
 };

 int main()
 {
     BookShop b1;
     b1.show();

     BookShop b2("Sweet Reads","Story Books",7);
     b2.show();
     return 0;
 }