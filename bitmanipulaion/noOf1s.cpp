#include <bits\stdc++.h>
using namespace std;

int noof1s(int n)
{
	int cout=0;
	while(n)
	{
		n= n & n-1;
		cout++; 
	}
	return cout;
}

int main()
{
	cout<<noof1s(14);
	return 0;
}