#include<bits\stdc++.h>
using namespace std;

void saiveprime(int n)
{
	int saive[100]={0};

	for(int i=2;i<=sqrt(n);i++)
	{
		if(saive[i]==0)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				saive[j]=1;
			}
		}
	}

	for(int i=2;i<=n;i++)
	{
		if(saive[i]==0)
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	int n;
	cin>>n;
	saiveprime(n);
}