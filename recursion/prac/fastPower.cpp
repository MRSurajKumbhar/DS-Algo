#include<bits\stdc++.h>
using namespace std;

int fastpower(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
    int xnb2= fastpower(a,b / 2);
	int xn = xnb2 * xnb2;
	if(b%2!=0)
	{
		xn = xn * a;
	}
	return xn;
}

int main()
{
	cout<<fastpower(3,4);
}