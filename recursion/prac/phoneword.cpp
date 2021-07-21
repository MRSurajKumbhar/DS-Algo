#include<bits\stdc++.h>
using namespace std;

string keypadarr [] = {"./","abcd","efgh","ijk","lmnop","qrst","uv","wxyz","?;",":",",","#$"};

void keypad(string s,string ans)
{
	if(s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch = s[0];
	string ros = s.substr(1);

	string code = keypadarr[ch-'0'];

	for(int i=0;i<code.length();i++)
	{
		keypad(ros,ans+code[i]);
	}


}

int main()
{
	keypad("123","");
}