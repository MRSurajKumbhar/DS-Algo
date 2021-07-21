#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	bool idx[n];
	for (int i = 0; i < n; ++i)
	{
		idx[i]=false;
	}

	for (int i = 0; i < n; ++i)
	{
		if(a[i]>=0)
		{
			idx[a[i]]=true;
		}
	}
int ans =-1;
	for(int i=0;i<n;i++)
	{
		if(idx[i]==false)
		{
			ans =i;
			break;
		}
	}

	cout<<ans<<endl;
}