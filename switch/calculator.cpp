#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"ener two numbers";
	cin>>a>>b;

	char oprand;
	cout<<"enter oprand";
	cin>>oprand;

	switch(oprand)
	{
		case '+':
			cout<<a+b<<endl;
		break;

		case '-':
			cout<<a-b<<endl;
		break;

		case '*':
			cout<<a*b<<endl;
		break;

		case '/':
			cout<<a/b<<endl;
		break;

		

		default :
			cout<<"enter another oprator"<<endl;
			break;

	}

}