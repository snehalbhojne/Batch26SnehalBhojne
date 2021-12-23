/*WAP to create a class branch with data members branch ID, branch Name,
 Branch City and member functions as getdata() and Display()*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 class Branch
 {
     public:
     int branchId;
     char branchName[30];
     char branchCity[30];
   
   void getdata(int branchId,char branchName[],char branchCity[])
   {
       this->branchId=branchId;
       strcpy(this->branchName,branchName);
       strcpy(this->branchCity,branchCity);
   }
   void Display()
   {
       cout<<"\n"<<this->branchId<<"\t"<<this->branchName<<"\t"<<this->branchCity;
   }
 };
 int main()
 {
     Branch b1,b2,b3;
     b1.getdata(103,"Production","Sangli");
     b2.getdata(405,"Manufacture","Pune");
     b3.getdata(709,"Transport","Mumbai");

     b1.Display();
     b2.Display();
     b3.Display();
     return 0;
 }
