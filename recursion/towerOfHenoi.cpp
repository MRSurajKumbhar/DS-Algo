#include<bits\stdc++.h>
using namespace std;

void towerOfHenoi(int n,char scr,char dest,char helper)
{
	if(n==0)
	{
		return;
	}

	towerOfHenoi(n-1,scr,helper,dest);
	cout<<"move from "<<scr<<" to "<<dest<<endl;
	towerOfHenoi(n-1,helper,dest,scr);
}

int main()
{
	towerOfHenoi(3,'A','C','B');
}