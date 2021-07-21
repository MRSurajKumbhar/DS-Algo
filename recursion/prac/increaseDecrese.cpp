#include<bits\stdc++.h>
using namespace std;

void printdecinc(int n)
{
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	printdecinc(n-1);
	cout<<n<<endl;

}

int main()
{
	printdecinc(5);

}