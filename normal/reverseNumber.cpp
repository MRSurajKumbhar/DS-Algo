#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int sum=0;
	while(n>0)
	{
		int temp=n%10;
		n=n/10;
		sum=sum*10+temp;
	}
	cout<<sum<<endl;
}