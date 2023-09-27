#include<iostream>
using namespace std;
int main()
{
	int x,k;
	cout<<"Enter the no of elements in array"<<endl;
	cin>>x;
	int a[x],t,i;
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<x-1;i++)
	{
		if(a[i]>a[i+1])
		{
		  	t=a[i];
		  	a[i]=a[i+1];
		  	a[i+1]=t;
		}
	}
	cout<<"Enter the kth element"<<endl;
	cin>>k;
	cout<<a[k-1];
	return 0;
}
