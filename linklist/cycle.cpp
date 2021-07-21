#include<bits\stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int val)
	{
		data=val;
		next=NULL;
	}
};

void makeCycle(node* &head, int pos)
{
	node* strat;
	node* temp =head;
	int count=1;
	while(temp->next!=NULL)
	{
		if(pos==count)
		{
			strat=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=strat;
}

void removeCycle(node* head)
{
	node* slow = head;
	node* fast = head;

	do
	{
		slow=slow->next;
		fast=fast->next->next;
	}while(slow!=fast);

	fast=head;

	while(fast->next!=slow->next)
	{
		fast=fast->next;
		slow=slow->next;
	}
	slow->next=NULL;
}

void insertAtTail(node* &head,int val)
{
	node* n = new node(val);

	if(head==NULL)
	{
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}

void display(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

bool detectcycle(node* &head)
{
	node* slow= head;
	node* fast =head;

	while(fast != NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			return true;
		}
	}

	return false;

}

int main()
{
	node* head=NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,2);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	makeCycle(head,4);
	cout<<detectcycle(head)<<endl;
	removeCycle(head);
	cout<<detectcycle(head)<<endl;
	display(head);


	// display(head);
}