#include<bits\stdc++.h>
using namespace std;

class Stack
{
	queue<int> q1;
	queue<int> q2;
	int N;

public:
	Stack()
	{
		N=0;
	}

	void push(int x)
	{
		q2.push(x);
		N++;
		while(!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}

		queue<int> temp = q1;
		q1=q2;
		q2=temp;

	}

	void pop()
	{
		if(q1.empty())
		{
			cout<<"Queue is empty"<<endl;
			return;
		}
		q1.pop();
		N--;
	}

	int top()
	{
		if(q1.empty() )
		{
			return -1;
		}
		return q1.front();
	}

	int size()
	{
		return N;
	}

};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	cout<<st.top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout<<st.top()<<endl;
	cout<<st.size()<<endl;
	return 0;
}