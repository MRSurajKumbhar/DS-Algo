#include<bits\stdc++.h>
using namespace std;

// pipxxpaippi



void changePi(string s)
{
	if(s.length()==0)
	{
		return;
	}
	if(s[0]=='p' && s[1]=='i')
	{
		cout<<"3.14";
		changePi(s.substr(2));
	}
	else{
		cout<<s[0];
		changePi(s.substr(1));
	}
}
int main()
{
	changePi("pipxxpaippi");
}