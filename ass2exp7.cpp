/*WAP to input an array of 10 elements and display addition of all elements.
 Also Display even and odd numbers from it*/
 #include<iostream>
 using namespace std;

  int add(int a[])
  {
      int sum=0;
      for(int i=0;i<10;i++)
      {
          sum=sum+a[i];
      }
      return sum;
  }
  void even(int a[])
  {
      cout<<"\n Even Numbers from array:";
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        cout<<" "<<a[i];
    }
  }
  void odd(int a[])
  {
      cout<<"\n Odd Numbers from array:";
      for(int i=0;i<10;i++)
      {
          if(a[i]%2==1)
          cout<<" "<<a[i];
      }
  }
 int main()
 {
    int a[10];
    cout<<"Enter array values:";
    for (int i=0;i<10;i++)
    {
        cin>>a[i];
    }
     
    cout<<"Array values are:";
    for(int i=0;i<10;i++)
    {
        cout<<" "<<a[i];
    }

    int ans=add(a);
    cout<<"\n Sum of the array elements is "<<ans;
    even(a);
    odd(a);

     return 0;
 }