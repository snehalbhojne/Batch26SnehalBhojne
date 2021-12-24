/*WAP to create a class ARRAY with member function getarray() which accepts the array elements. 
Define 2 different objects of that class ARRAY as a1 and a2.Get array values in object a1 and in object a2.
Define a function calculate() which accepts the objects as arguments 
and performs addition of array from object a1 and a2.*/

#include<iostream>
using namespace std;
class ARRAY
{
    public:
    int a,b,c;
    void getarray(int a,int b,int c)
    {
      this->a=a;
      this->b=b;
      this->c=c;
    }
    void show()
    {
        cout<<"\n"<<this->a<<"\t "<<this->b<<"\t "<<this->c;
    }
};
 
 void calculate(ARRAY a1[],ARRAY a2[])
       {
           int sum,sum1,sum2,sum3;
           sum1=a1.this->a+a2.this->a;
           sum2=a1.this->b+a2.this->b;
           sum3=a1.this->c+a2.this->c;
          cout<<"Addition of two arrays:"<<sum[3]={sum1,sum2,sum3};
       }
int main()
{
     ARRAY a1,a2;
     a1.getarray(2,3,4);
     a2.getarray(3,4,5);
     cout<<"Object a1:";
     a1.show();
     cout<<"Object a2:";
     a2.show();
    calculate(a1,a2);
     
    return 0;
}