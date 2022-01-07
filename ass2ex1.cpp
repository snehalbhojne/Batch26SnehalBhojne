/*WAP Interchanging 2nd and 3rd digit from 5 digit integer number*/
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter five digit no:"; 
    cin>>no;
    int rem,arr[5];
    int temp,rev;
      temp = no;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }  
    for(int i=0;i<5;i++)
    {
            rem =rev%10;
            arr[i] = rem;
            rev= rev/10;
    }
    temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
    cout<<"The resultant no is:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}