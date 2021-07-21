#include <bits\stdc++.h>
using namespace std;

int eculid(int a,int b)

{
	if(b==0)
	{
		return a;
	}
	int rem = a % b;
	a=b;
	b=rem;
}

int main()
{
	int a,b;
	cin>>a>>b;

	cout<<eculid(a,b);
}