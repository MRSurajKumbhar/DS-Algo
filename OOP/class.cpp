#include<bits\stdc++.h>
using namespace std;

class student{
	string name;
public:
	int age;
	bool gender;

	void setname(string s)
	{
		name=s;
	}

	void getname()
	{
		cout<<name<<endl;
	}

	student()
	{
		cout<<"default constroctor"<<endl;
	}//default constroctor

	student (string n,int a,bool g)
	{
		cout<<"parameterised constroctor"<<endl;
		name = n;
		age = a;
		gender=g;
	}// parametarised constructor 

	student (student &a)
	{
		cout<<"copy constroctor"<<endl;
		name = a.name;
		age = a.age;
		gender = a.gender;
	}//copy constrotor

	~student()
	{
		cout<<"destructor is called"<<endl;
	}//distructor 

	void printInfo()
	{
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<gender<<endl;
	}

	bool operator == (student &a)
	{
		if(name==a.name && age==a.age && gender==a.gender)
		{
			return true;
		}
		return false;
	}
};

int main()
{
	// student a;
	// a.name="suraj";
	// a.age=22;
	// a.gender=0;
	// a.printInfo();

	// student a[3];

	// for(int i=0;i<3;i++)
	// {
	// 	cout<<"Name = ";
	// 	cin>>a[i].name;

	// 	cout<<"age = ";
	// 	cin>>a[i].age;

	// 	cout<<"gender = ";
	// 	cin>>a[i].gender;
	// 	a[i].printInfo();
	// }

	// for (int i = 0; i < 3; ++i)
	// {
		
	// }


	// student a;
	// string s;
	// cin>>s;
	// a.setname(s);
	// a.getname();

	// student b("suraj",29,0);
	// b.printInfo();
	student b("suraj",23,0);
	student a("saurabh",20,0);

	student c =b;
	c.printInfo();

	if(a==b)
	{
		cout<<"same"<<endl;
	}
	else{
		cout<<"not Same"<<endl;
	}
}