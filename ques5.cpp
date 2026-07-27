#include<iostream>
using namespace std;
int larg(int *arr,int p)
{
	int larg = 0;
	for(int i=0;i<p;i++)
	{
		if(*(arr+i)>larg)
		{
			larg=*(arr+i);
		}
	}
	return larg;
}
int main()
{
	int p,arr[100];
	int (*ptr)(int *,int);
	cout<<"Enter size of array"<<"\n";
	cin>>p;
	cout<<"Enter the elements of array"<<"\n";
	for(int i=0;i<p;i++)
	{
		cin>>*(arr+i);
	}
	ptr=&larg;
	cout<<"The largest is "<<ptr(arr,p);
	return 0;	
}
