#include<bits\stdc++.h>
using namespace std;

void displayarray(int a[],int i)
{
	
	if(i==5)
	{
		return ;

	}
	cout<<a[i]<<" ";
	displayarray(a,i+1);
}

int main()
{
	int a[5]={10,20,30,40,50};
	displayarray(a,0);
}