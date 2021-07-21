#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int space = (2*n-1)/2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=space;j++)
		{
			cout<<"  ";
		}
		for(int j=n*2-1;j>=1;j--)
		{
			if(j==n-j+1)
		}
		cout<<endl;
	}
}