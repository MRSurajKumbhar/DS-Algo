#include<bits\stdc++.h>
using namespace std;

int clearbit(int n,int pos)
{
	int mask = ~(1<<pos);
	return (n & mask); 
}

int main()
{
	cout<<clearbit(9,0);
	return 0;
}