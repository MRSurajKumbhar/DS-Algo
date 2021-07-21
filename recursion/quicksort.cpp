#include<bits\stdc++.h>
using namespace std;



void swap(int a[],int i,int j)
{
	int temp = a[i];
	a[i]=a[j];
	a[j]=temp;
}

int partion(int a[],int l,int r)
{
	int pivote=a[r];
	int i=l-1;

	for(int j=l;j<r;j++)
	{
		if(a[j]<pivote)
		{
			i++;
			swap(a,i,j);
		}
	}

	swap(a,i+1,r);
	return i+1;
}

void quicksort(int a[],int l,int r)
{
	if(l<r)
	{
		int pi = partion(a,l,r);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,r);
	}
}

int main()
{
	int a[]={10,9,8,7,6,5,4,3,2,1};
	quicksort(a,0,9);
	for (int i = 0; i <10; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}