#include<bits\stdc++.h>
using namespace std;

int firstoccur(int a[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
	}
	if(a[i]==key)
	{
		return i;
	}

	return firstoccur( a, n, i+1, key);
}

//int lastoccur(int a[],int n,int i,int key)
//{
//	if(i==n)
//	{
//		return -1;
//	}
//	int restarray=lastoccur(a,n,i+1,key);
//
//	if(restarray!=-1)
//	{
//		return restarray;
//	}
//
//	if(a[i]==key)
//	{
//		return i;
//	}
//}

int main()
{
	int a[5]={1,2,3,2,4};
	cout<<firstoccur(a,5,0,2)<<endl;
//	cout<<lastoccur(a,5,0,2);
}
