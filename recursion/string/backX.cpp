#include<bits\stdc++.h>
using namespace std;

string backx(string s)
{
	if(s.length()==0)
	{
		return"";
	}

	char ch = s[0];
	string ans = backx(s.substr(1));
	if(ch=='x')
	{
		return ans+ch;
	}
	 return ch+ans;
}

int main()
{
	cout<<backx("abxsydxxsyhjx");
}