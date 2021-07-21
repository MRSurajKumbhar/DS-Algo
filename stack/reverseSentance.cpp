#include<bits\stdc++.h>
using namespace std;

void reverse(string s)
{
	stack <string> st;

	for(int i=0;i<s.length();i++)
	{
		string word = "";
		while((s[i]!='+' || s[i]!='-' || s[i]!='*' || s[i]!='/') && i<s.length())
		{
			word = word+s[i];
			i++;
		}

		st.push(word);
	}
	

	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}

	cout<<endl;

}

int main()
{
	string s = "Suraj Bhaskar Kumbhar";
	reverse(s);
	return 0;
}