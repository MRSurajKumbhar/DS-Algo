#include "bits\stdc++.h"
using namespace std;

class node{
public:
	int data ;
	node* next;

	node(int val)
	{
		data=val;
		next=NULL;
	}

};

int lengthnode(node* head)
{
	int count=1;

	while(head->next!=NULL)
	{
		count++;
		head=head->next;
	}
	return count;
}

node* kaapend(node* &head, int pos)
{

	node* tail;
	node* newhead;
	node* newtail;

	node* temp= head;
	int length = lengthnode(head);
	int k = length-pos;
	int count=1;
	while(temp->next!=NULL)
	{
		if(count==k)
		{
			newtail=temp;
		}
		if(count==k+1)
		{
			newhead=temp;
		}
		count++;
		temp=temp->next;
	}

	tail=temp;

	tail->next=head;
	newtail->next=NULL;

	return newhead;

}



void insertAtTail(node* &head, int val)
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

int main()
{
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	display(head);

	node* newhead= kaapend(head,2);
	display(newhead);
	return 0;
}	