#include <bits\stdc++.h>
using namespace std;

void find(int n , int a,int b)
{
	int c1 = n/a;
	int c2 = n/b;
	int c3 = n/(a*b);

	int result = c1 + c2 -c3;
	cout<<result<<endl;
}

int main(){
	int n,a,b;
	cin>>n>>a>>b;

	find(n,a,b);
}
