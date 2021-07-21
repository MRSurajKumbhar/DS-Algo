#include<bits\stdc++.h>
using namespace std;

class Queue
{
	stack<int> st1;
	stack<int> st2;

public:

	void push(int x)
	{
		st1.push(x);
	}

	int pop()
	{
		if(st1.empty() && st2.empty())
		{
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		
		if(st2.empty())
		{
			while(!st1.empty())
			{
				st2.push(st1.top());
				st1.pop();

			}
		}

		int topval = st2.top();
		st2.pop();
		return topval;
	}

	bool empty()
	{
		if(st1.empty() and st2.empty())
		{
			return true;
		}
		return false;
	}

};

int main()
{
	Queue qu;
	qu.push(1);
	qu.push(2);
	qu.push(3);
	qu.push(4);
	qu.push(5);
	cout<<qu.pop()<<endl;
	qu.push(6);
	cout<<qu.pop()<<endl;
	cout<<qu.pop()<<endl;
	cout<<qu.pop()<<endl;
	cout<<qu.pop()<<endl;
	cout<<qu.pop()<<endl;
	return 0;
}
