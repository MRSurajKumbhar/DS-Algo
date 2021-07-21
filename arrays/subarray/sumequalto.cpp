#include<bits\stdc++.h>
using namespace std;



bool findSum(int arr[],int n, int k)
{
	int low =0;
	int high=n-1;

	while(low<high)
	{
		if(arr[low]+arr[high]==k)
		{
			cout<<low<<" "<<high<<endl;
			return true;
		}

		else if(arr[low]+arr[high]>k)
		{
			high--;
		}
		else
		{
			low++;
		}
	}

	return 0;
}

int main()
{
	int arr[5]={10,23,33,34,50};
	int n = 5;
	int k =44;

	cout<<findSum(arr,n,k)<<endl;

	return 0;
}