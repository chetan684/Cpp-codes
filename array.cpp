#include<iostream>
using namespace std;
int main()
{
	int x,i;
	cout<<"enter the no of elements in array"<<endl;
	cin>>x;
	int a[x];
	cout<<"Enter the elements of array"<<endl;
	for(i=0;i<x;i++)
	{
	cin>>a[i];	
	}
	int max=a[0];
	int min=a[0];
	for(i=0;i<x;i++)
	{
		if(a[i]%2 != 0)
		{
			cout<<a[i]<<endl;
		}
		else{
		}
		if(max<a[i+1])
		{
		max=a[i+1];	
		}
		else{
		}
		if(min>a[i])
		{
		min=a[i];	
		}
		else{
			
		}
		
	}
	cout<<"min "<<min<<endl;
	cout<<"max "<<max;
	return 0;
}
