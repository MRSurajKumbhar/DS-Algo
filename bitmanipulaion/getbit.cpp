#include<bits\stdc++.h>
using namespace std;

int getbit(int n , int pos)
{
	int mask= (1<<pos);
	return ((n & mask)!=0);
}

int main()
{
	cout<<getbit(11,1);
	return 0;
}