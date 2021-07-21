//in inheritance you will call base class member and member function in derived class.
//but you only assesible public and protected member of you base class.


#include "bits\stdc++.h"
using namespace std;

class A 
{
private:
int age;
string name;
public:
void funcA()
{
	cout<<"in A class Function A in public"<<endl;
}

protected:

	void funcaA()
	{
		cout<<"in A class Function A in protected"<<endl;
	}
};

class b : public A
{
	public:
		void funcB()
	{
		funcaA();
		cout<<"in func b"<<endl;
	}
};

int main()
{
	b b;
	b.funcA();
	
	b.funcB();
	return 0;
}