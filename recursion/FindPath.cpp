#include<bits\stdc++.h>
using namespace std;

int findpath(int c,int r)
{
	if(c==1 || r==1)
	{
		return 1;
	}

	return (findpath(c-1,r) + findpath(c,r-1));
}

int main()
{
	cout<<findpath(4,3);
}