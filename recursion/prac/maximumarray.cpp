#include<bits\stdc++.h>
using namespace std;

int maximum(int a[],int i)

{
	if(i==4)
	{
		return a[i];
	}

	int mxsa = maximum(a,i+1);
	int mx = max (a[i],mxsa);
	return mx;
}

int main()
{
	int a[]= {12, 91,2,33,82};
	cout<<maximum(a,0);
}