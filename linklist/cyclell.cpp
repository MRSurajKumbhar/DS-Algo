#include<bits\stdc++.h>
using namespace std;

class node{

public:
	int data;
	node* next;

	node(int val)
	{
		data=val;
		next=NULL;
	}

};

void deleteathead(node* &head)
{
	node* temp = head;

	while(temp->next!=head)
	{
		temp=temp->next;
	}

	node* toDelete = head;
	temp->next=head->next;
	head=head->next;

	delete toDelete;
}

void deletenode(node* &head, int pos)
{
	int count=1;
	if(pos==1)
	{
		deleteathead(head);
		return;
	}
	node* temp = head;
	while(count!= pos-1)
	{
		temp=temp->next;
		count++;
	}
	node* toDelete = temp->next;
	temp->next=temp->next->next;
	delete toDelete;

	
}

void insertAtHead(node* &head,int val)
{
	node* n = new node(val);
	if(head==NULL)
	{
		head=n;
		n->next=n;
		return;
	}

	node* temp = head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}

	temp->next=n;
	n->next=head;
	head=n;

}

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);

	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}

	node* temp = head;

	while(temp->next!=head)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
}

void display(node* head)
{
	node* temp = head;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp!=head);
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
	
	deletenode(head,1);
	// deleteathead(head);

	display(head);
	return 0;
}