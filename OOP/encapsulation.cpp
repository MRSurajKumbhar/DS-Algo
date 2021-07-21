
//encpsulation means hiding the sensetive data from user;

#include<bits\stdc++.h>
using namespace std;


class encapsulation
{
	int x;
	string y;
public:
	
	void setvalu(int a,string b)
	{
		x=a;
		y=b;
	}
	void getvalue()
	{
		cout<<x<<" "<<y<<endl;
	}
	
};

int main()
{
	encapsulation a;
	a.setvalu(10,"suraj");
	a.getvalue();
	return 0;
}