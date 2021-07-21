#include<bits\stdc++.h>
using namespace std;

int main()
{
	string s ;cin>>s;
	vector <int> dics(256,-1);
	int maxlen=0,start=-1;
	for(int i=0;i<s.size();i++)
	{
		if(dics[s[i]]>start)
		{
			start = dics[s[i]];
		}
		dics[s[i]]=i;

		maxlen = max(maxlen,i-start);
	}

	cout<<maxlen;
}