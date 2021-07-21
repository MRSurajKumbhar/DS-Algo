#include<bits\stdc++.h>
using namespace std;

int lastoccur(int a[],int i,int key)
{
	if(i==5)
	{
		return -1;
	}
	int lsoc = lastoccur(a,i+1,key );
	if(a[i]==key)
	{
		lsoc = max (i,lsoc);
	}
	return lsoc;
}

int main()
{
	int a[]={2 ,3, 4, 2, 5};
	cout<<lastoccur(a,0,5);
}