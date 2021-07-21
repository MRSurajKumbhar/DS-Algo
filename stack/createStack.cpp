#include<bits\stdc++.h>
using namespace std;

#define n 100

class Stack{

	int* a;
	int top;
public:
	Stack()
	{
		a = new int[n];
		top=-1;
	}

	void push(int val)
	{
		if(top==n-1)
		{
			cout<<"stack is overflow"<<endl;
			return;
		}
		top++;
		a[top]=val;
	}

	void pop()
	{
		if(top==-1)
		{
			cout<<"no to pop"<<endl;
			return;
		}
		top--;
	}

	int Top()
	{
		if (top<=-1)
		{
			return -1;
		}
		return a[top];
	}

	bool empty()
	{
		if(top==-1)
		{
			return true;
		}
		return false;
	}

};

int main()
{
	Stack st;
	st.push(1);
	st.push(2);
	// st.push(3);
	// st.push(4);
	// st.push(5);
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout<<st.Top()<<endl;
	return 0;
}