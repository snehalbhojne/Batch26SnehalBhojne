/*WAP to calculate area of circle,Triangle and square.
 [Area of circle = 3.14*rad*rad, Area of triangle = 0.5*base*height, 
 Area of square = side*side]*/
 #include<iostream>
 using namespace std;
 float areaOfCircle(int rad)
 {
 	return rad*rad*3.14;
 }
 float areaOfTriangle(int base,int height)
 {
 	return 0.5*base*height;
 }
 int areaOfSquare(int side)
 {
 	return side*side;
 }
 int main()
 {
 	float rad;
 	int base,height,side;
 	cout<<"Enter radius:";
 	cin>>rad;
 	cout<<"Enter base and height:";
 	cin>>base>>height;
 	cout<<"Enter side:";
 	cin>>side;
 	
 	float area=areaOfCircle(rad);
 	cout<<"\nArea of Circle is "<<area;
 	float ans=areaOfTriangle(base,height);
 	cout<<"\nArea of Traingle is "<<ans;
 	float square=areaOfSquare(side);
 	cout<<"\n Area of Square is "<<square;
 	
 }
