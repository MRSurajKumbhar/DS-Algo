#include<bits\stdc++.h>
using namespace std;

#define n 20

class queue1
{
	int *arr;
	int front;
	int back;
public:
	queue1()
	{
		arr= new int[n];
		front = -1;
		back= -1;
	}

	void push(int x)
	{
		if(back==n-1)
		{
			cout<<"queue is overflow"<<endl;
			return;
		}

		back++;
		arr[back]=x;
		if(front == -1)
		{
			front++;
		}
	}

	void pop()
	{
		if(front==-1 || front>back)
		{
			cout<<"nothing to pop"<<endl;
			return;
		}
		front++;
	}

	int peek()
	{
		if(front==-1 || front > back)
		{
			return -1;
		}
		return arr[front];
	}

	bool isEmpty()
	{
		if(front==-1 || front>back)
		{
			return true;
		}
		return false;
	}

};

int main()
{
	queue1 qu;
	qu.push(10);
	qu.push(20);
	qu.push(30);
	qu.push(40);
	qu.push(50);
	qu.pop();

	cout<<qu.peek()<<endl;
	cout<<qu.isEmpty()<<endl;


}