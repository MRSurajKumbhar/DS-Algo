#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		
		for(int j=1;j<=i;j++)
		{
			sum=sum+1;
			cout<<sum<<" ";
		}
		cout<<endl;
	}
	return 0;
}