#include<iostream>
using namespace std;
float area(float, float );
float area(float);
int main()
{
	float r,B,H;
	cout<<"Enter base and height of triangle: ";
	cin>>B>>H;
	cout<<"Enter radius of circle: ";
	cin>>r;
	cout<<"Area of Triangle is: "<<area(B,H)<<endl;
	cout<<"Area of Circle is: "<<area(r);
	
}
float area(float B, float H)
{
	return((B*H)/2);
}
float area(float r)
{
	return(3.14*r*r);
}