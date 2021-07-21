#include<bits\stdc++.h>
using namespace std;

bool findTriplet(vector <int> a,int target)
{
	bool ans=false;
	int n = a.size();
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		int low = i+1, hi = n-1;
		while(low<hi)
		{
			int sum = a[i]+a[low]+a[hi];

			if(sum==target)
			{
				ans=true;
				return ans;
			}
			else if (sum<target)
			{
				low++;
			}
			else
			{
				hi--;
			}
		}
	}

	return ans;
}

int main()
{
	vector<int> v ={3,2,6,8,1};

	cout<<findTriplet(v,6);
}