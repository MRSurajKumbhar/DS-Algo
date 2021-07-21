#include<iostream>
using namespace std;

int sumNature(int n)
{
	int sum=n*(n+1)/2;
	// for(int i=1;i<=n;i++)
	// {
	// 	sum+=i;
	// }


	return sum;
}

int main()
{
	int n;
	cin>>n;

	cout<<sumNature(n)<<endl;
	return 0;
}