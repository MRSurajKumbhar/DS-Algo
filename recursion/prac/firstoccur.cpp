#include<bits\stdc++.h>
using namespace std;

int firstouur(int a[],int i,int key)
{
	if(i==5)
	{
		return -1;
	}
	
	if(a[i]==key)
	{
		return i;
	}
	firstouur( a,i+1,key);
}


int main()
{
	int a[]={1 , 3, 8,4,8};
	cout<<firstouur(a,0,8);
}