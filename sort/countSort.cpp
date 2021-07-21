#include<bits\stdc++.h>
using namespace std;

void countSort(int a[],int n)
{
	int k = a[0];

	for (int i = 0; i < n; ++i)
	{
		k=max(a[i],k);
	}

	int count[11]={0};

	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(int i=1;i<=k;i++)
	{
		count[i]+=count[i-1];
	}

	int output[n];
	for(int i=n-1;i>=0;i--)
	{
		output[--count[a[i]]]=a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=output[i];
	}
}

int main()
{
	int a[]={10,9,8,7,6,5,4,3,2,1};
	countSort(a,10);
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
}