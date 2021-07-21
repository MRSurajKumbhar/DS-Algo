#include<bits\stdc++.h>
using namespace std;

bool powerof2(int n)
{
	return (n==0 || (n & n-1)==0);
}

int main()
{

	cout<<powerof2(16);
	return 0;
}