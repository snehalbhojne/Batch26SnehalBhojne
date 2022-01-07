/*WAP to interchange the integer numbers using a function
 [Reference Arguments]*/
 #include<iostream>
 using namespace std;

 void interchange(int &a,int &b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;

    cout<<"\n After interchanging...";
    cout<<"\n a= "<<a;
    cout<<"\n b= "<<b;

 }
 int main()
 {
     int a,b;
     cout<<"\n Enter values of a and b :";
     cin>>a>>b;
     interchange(a,b);
     return 0;
 }
