#include<iostream>
using namespace std;
int main()
{
	int x,j;
	cout<<"Enter the no of elements in array"<<endl;
	cin>>x;
	int a[x],t,i;
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<x-1;j++)
	{
	
	for(i=0;i<x-1;i++)
	{
		if(a[i]>a[i+1])
		{
		  	t=a[i];
		  	a[i]=a[i+1];
		  	a[i+1]=t;
		}
	}}
	for(i=0;i<x;i++)
	{
		cout<<a[i];
	}

	return 0;
}
