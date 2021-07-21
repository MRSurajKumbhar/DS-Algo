#include<bits\stdc++.h>
using namespace std;

void towerofhenoi(int n,int s,int d,int h)
{
	if(n==0)
	{
		return;
	}
	towerofhenoi( n-1, s,h,d);
	cout<<n<<" [ "<<s<<" -> "<<d<<"] "<<endl;
	towerofhenoi(n-1,h,d,s);
}

int main()
{
	towerofhenoi(3,10,11,12);
}