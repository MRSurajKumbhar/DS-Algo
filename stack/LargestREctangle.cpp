#include<bits\stdc++.h>
using namespace std;

int Largestreactangle( vector<int> a)
{
	int n = a.size(),ans=0,i=0;
	stack<int> st;
	a.push_back(0);

	while(i<n)
	{
		while(!st.empty() && a[st.top()]>a[i])
		{
			int t= st.top();
			int h = a[t];
			st.pop();

			if(st.empty())
			{
				ans = max(ans,h*i);
			}
			else
			{
				int l = i-st.top()-1;
				ans = max(ans,l*h);
			}
		}
		st.push(i);
		i++;
	}

	return ans;

}

int main()
{
	vector<int> v = {2,3,1,5};
	cout<<Largestreactangle(v);
}