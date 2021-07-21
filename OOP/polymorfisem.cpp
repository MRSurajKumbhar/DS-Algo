//in polymorfisem there are tow type 
//campile time polymorfisem :- 1) function overloding 2) opearator overloding

//run time polymorfisem :- 1) vertual function



#include<bits\stdc++.h>
using namespace std;

//****************** function ovrloding ******************************************************

class A
{
public:
	void func()
	{
		cout<<"you are in no argument func"<<endl;
	}
	void func(int x)
	{
		cout<<"you are int argument func"<<endl;
	}
	void func(double s)
	{
		cout<<"you are double argument func"<<endl;
	}

};

//****************** operator overloding **********************************************************

class Complexa
{
private:
	int real;
	int img;
public:

	Complexa (int r=0,int i=0)
	{
		real=r;
		img=i;
	}
	Complexa operator + (Complexa &obj)
	{
		Complexa res;
		res.real = real + obj.real;
		res.img = img + obj.img;
		return res;
	}

	void display()
	{
		cout<<real<<" +i"<<img<<endl;
	}
};


//********************** virtual function ******************************************************

class base{

public: 
	virtual void print()
	{
		cout<<"you are in base class print"<<endl;
	}
	void display()
	{
		cout<<"you are in base class display"<<endl;
	}

};

class derived : public base{
public:
	void print()
	{
		cout<<"you are in derived class print"<<endl;
	}

	void display()
	{
		cout<<"you are in derivrd class display"<<endl;
	}

};

int main()
{

base *baseptr;

derived d;
baseptr = &d;

baseptr -> print();
baseptr -> display();

}

