#include<bits\stdc++.h>
using namespace std;

int kadanes(int a[] , int n)
{
	int currentSum =0;
	int maxSum = INT_MIN;
	for(int i=0;i<n;i++)
	{
		currentSum+= a[i];
		if(currentSum<0)
		{
			currentSum=0;
		}

		maxSum = max(currentSum,maxSum);
	}

	return maxSum;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int nonWrap = kadanes(a,n);
	int totalSum=0;

	for(int i=0;i<n;i++)
	{
		totalSum+=a[i];
		a[i]=-a[i];
	}

	int Wrap = totalSum + kadanes(a,n);

	cout<<max(nonWrap,Wrap)<<endl;
}