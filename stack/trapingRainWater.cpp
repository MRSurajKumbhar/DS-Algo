#include<bits\stdc++.h>
using namespace std;

int TrapingRainWater(vector <int> a)
{
	int n = a.size() , ans=0;
	stack<int> st;

	for(int i=0;i<n;i++)
	{
		while(!st.empty() && a[st.top()]<a[i])
		{
			int curr = st.top();
			st.pop();

			if(st.empty())
			{
				break;
			}
			int diff = i-st.top()-1;
			ans+= (min(a[st.top()],a[i] ) - a[curr] )* diff;
		}
		st.push(i);
	}

	return ans;
}

int main()
{
	vector <int>  v = {4,2,3,1,4};
	cout<<TrapingRainWater(v);
	return 0;
}