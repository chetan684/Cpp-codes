#include<iostream>
using namespace std;
int main()
{
	int x,i;
	cout<<"Enter the number"<<endl;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
