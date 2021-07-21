#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int check=n;
	int sum=0;
	while(check>0)
	{
		int temp = check%10;
		sum=sum+temp*temp*temp;
		check=check/10;
	}
	if(sum==n)
	{
		cout<<"number is armstrong"<<endl;
	}
	else{
		cout<<"number not armstrong"<<endl;
	}
	return 0;
}