#include<bits\stdc++.h>
using namespace std;

void reversearray(int a[],int i)
{
	if(i==5)
	{
		return;
	}
	reversearray(a,i+1);
	cout<<a[i]<<" ";
}

int main()
{
	int a[]={10,20,30,40,50};
	reversearray(a,0);
}