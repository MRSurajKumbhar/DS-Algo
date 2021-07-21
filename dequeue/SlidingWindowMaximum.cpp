#include<bits\stdc++.h>
using namespace std;

vector<int> SlidingWindowMaximum(int a[],int k,int n)
{
	deque<int> q;
	vector<int> ans;

	for(int i=0;i<k;i++)
	{
		while(!q.empty() && a[q.back()]<a[i])
		{
			q.pop_back();
		}
		q.push_back(i);
	}

	ans.push_back(a[q.front()]);

	for(int i=k;i<n;i++)
	{
		if(q.front() == i-k)
		{
			q.pop_back();
		}

		while(!q.empty() && a[q.back()]< a[i])
		{
			q.pop_back();
		}
		q.push_back(i);

		ans.push_back(a[q.front()]);
	}
	

	
	



	return ans;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	vector<int> v;
	v = SlidingWindowMaximum(a,3,n);

	for(auto i : v)
	{
		cout<<i<<" ";
	}
}