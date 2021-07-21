#include<bits\stdc++.h>
using namespace std;

int merge(int arr[],int l,int mid,int r)
{
	int inv=0;
	int n1= mid-l+1;
	int n2 = r-mid;
	int a[n1];
	int b[n2];

	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=b[j];
			k++;
			j++;
			inv+=n2-i;
		}
	}

	while(i<n1)
	{
		arr[k]=a[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=b[j];
		k++;
		j++;

	}

	return inv;
}

int mergesort(int a[],int l,int r)
{
	int inv=0;

	if(l<r)
	{
		int mid = (l+r)/2;
		inv+=mergesort(a,l,mid);
		inv+=mergesort(a,mid+1,r);
		inv+=merge(a,l,mid,r);
	}
	return inv;
}

int main()
{
	int a[]={2,1,0};
	cout<<mergesort(a,0,3);
}