#include<bits\stdc++.h>
using namespace std;

int find(int a,int b,int c,int n)
{
	if(n==3)
	{
		return c;
	}

	return find(b,c,a+b+c,n-1);
}


int main()
{
	int a,b,c,n;
	cin>>a>>b>>c>>n;

	cout<<find(a,b,c,n);
}