#include<iostream>
using namespace std;
int main()
{
	int i,x,c=0,flag=0,z,n;
	cout<<"Enter the number"<<endl;
	cin>>x;
	n=x;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	for(i=0;i<c;i++)
	{
		z=x%10;
		x=x/10;
		if(z==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"No is duck number"<<endl;
	}
	else
	{
		cout<<"No is not duck number"<<endl;
	}
	return 0;
}
