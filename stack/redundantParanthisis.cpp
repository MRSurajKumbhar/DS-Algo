#include<bits\stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	bool ans=false;
	stack<char> st;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(')
		{
			st.push(s[i]);
		}
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' )
		{
			st.push(s[i]);
		}
		else if(s[i]==')')
		{
			if(st.top()=='(')
			{
				ans=true;
				break;
			}
			while(st.top()=='+' || st.top()=='+'|| st.top()=='+' || st.top()=='+')
			{
				st.pop();
			}
			st.pop();
		}
	}
	cout<<ans;
	return 0;
}