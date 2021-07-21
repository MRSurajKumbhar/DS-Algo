#include<bits\stdc++.h>
using namespace std;

class Queue
{
	stack<int> st;
public:
	void push(int x)
	{
		st.push(x);
	}

	int pop()
	{
		if(st.empty())
		{
			cout<<"Queue is empty"<<endl;
			return -1;
		}

		int x = st.top();
		st.pop();
		if(st.empty())
		{
			return x;
		}

		int item = pop();
		st.push(x);
		return item;
	}
	bool empty()
	{
		if(st.empty())
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