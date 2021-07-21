#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<"  ";
		}
		for(int k=i;k>=2;k--)
		{
			cout<<k<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<k<<" " ;
		}
		cout<<endl;
	}
	return 0;
}