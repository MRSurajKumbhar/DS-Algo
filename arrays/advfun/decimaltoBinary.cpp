#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
	int x=1;
	int ans=0;

	while(n>0)
	{
		int temp = n%10;
		 ans = ans+(x*temp);
		n=n/10;
		x=x*2;
	}
	return ans;
}

int octalToDecimal(int n)

{
	int x=1;
	int ans=0;

	while(n>0)
	{
		int temp = n%10;
		ans = ans+(x*temp);
		n=n/10;
		x=x*8;
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;

	cout<<octalToDecimal(n)<<endl;
	return 0;
}