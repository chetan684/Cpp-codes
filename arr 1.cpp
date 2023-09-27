#include<iostream>
using namespace std;
int main()
{   int i,x,y;
	cout<<"Enter the no of elements in array"<<endl;
	cin>>x;
	int a[x],s=0,e=x-1;
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<x;i++)
	{
		cin>>a[i];
	}
	while(s<e)
	{
		y=a[s];
		a[s]=a[e];
		a[e]=y;
		s++;
		e--;
	}
	for(i=0;i<x;i++)
	{
		cout<<a[i];
	}
}
