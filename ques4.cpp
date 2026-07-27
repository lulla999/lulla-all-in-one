#include<iostream>
using namespace std;
int sum(int,int,int);
float sum(float,float,float);
int main()
{
	int p1,p2,p3;
	float s1,s2,s3;
	cout<<"Enter three integer type variables: "<<"\n";
	cin>>p1>>p2>>p3;
	cout<<"Enter three float type variables: "<<"\n";
	cin>>s1>>s2>>s3;
	cout<<"The product of integer type values are "<<sum(p1,p2,p3)<<"\n";
	cout<<"The product of float type values are "<<sum(s1,s2,s3)<<"\n";
	return 0;
}   
int sum(int x,int y,int z)
{
	int product;
	product=x*y*z;
	return product;
}
float sum(float x,float y,float z)
{
	float product;
	product=x*y*z;
	return product;
}