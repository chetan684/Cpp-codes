#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,count=0;
	cout<<"enter the range"<<endl;
	cin>>a>>b;
	for(i=a;i<b;i++)
	{
		for(j=2;j<i;j++)
		{
		
		 if(i%j==0)
		 {
		 	break;
			 }	
			 	
		}
		if(j==i)
		{
			count++;
			cout<<i<<endl;
		}
	}
	return 0;
}
