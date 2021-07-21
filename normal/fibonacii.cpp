#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;

	if(n==1)
	{
		cout<<"0 "<<endl;
	}
	else if(n==2)
	{
		cout<<"0 1"<<endl;
	}
	else{
		int curr_f,a=0,b=1,i=3;
		cout<<a<<" "<<b<<" "; 
		while(i<=n)
		{
			curr_f=a+b;
			cout<<curr_f<<" ";
			a=b;
			b=curr_f;
			i++;
		}
	}
	return 0;
}