#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b[10],i,j,c,sum=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while(n!=0)
	{b[a]=n%10;
		n=n/10;
		a++;
		
		cout<<b[a]<<endl;
	}
	
	cout<<"length of number is "<<a;
	for(i=0;i<a;i++)
	{
		c=b[a];
		int z=1;
		for(j=0;j<a;j++)
		{
			z=z*c;
		}
		sum=sum+z;
	}
	cout<<sum;
	return 0;
}

