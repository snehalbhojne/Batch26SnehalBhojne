/*WAP to find billammount with discount. Apply discount in following conditions
1. if price of product is greater than Rs.50 then apply discount 2.5%
2. if price of product is greater than Rs.100 then apply discount 5%
3. if price of product is greater than Rs.200 then apply discount 7% */

#include<iostream>

using namespace std;

int main()
{
    float bamt,Total;

    cout<<"\n Enter Bill Amount : ";
    cin>>bamt;

    if(bamt>50 && bamt<=100)
    {
        Total = bamt - (bamt*2.5/100);
        cout<<"\n Your Total bill  = "<<Total;
    }

    else if(bamt>100 && bamt<=200)
    {
        Total = bamt - (bamt*5/100);
        cout<<"\n Your Total bill = "<<Total;
    }

    else if(bamt>200)
    {
        Total = bamt - (bamt*7/100);
        cout<<"\n Your Total bill  = "<<Total;
    }
    return 0;
}