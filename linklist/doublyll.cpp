#include<bits\stdc++.h>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node* prev;

	node(int val)
	{
		data=val;
		next=NULL;
		prev=NULL;
	}
};

void insertAtHead(node* &head, int val)
{
	node* n = new node(val);
	n->next=head;
	if(head!=NULL)
	{

	head->prev=n;
	}
	head=n;
}

void insertAtTail(node* &head, int val)
{

	if(head==NULL)
	{
		insertAtHead(head,val);
		return;
	}
	node* n = new node(val);
	node* temp =head;

	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;
}

void deleteathead(node* &head)
{
	node* toDelete = head;
	if(head->next!=NULL)
	{
		head=head->next;
		head->prev=NULL;
	}
	

	delete toDelete;
}

void deletenode(node* &head,int pos)
{
	int count=1;

	if(pos==1)
	{
		deleteathead(head);
	}
	node* temp = head;

	while(temp->next!=NULL && count!=pos)
	{
		temp=temp->next;
		count++;
	}

	temp->prev->next=temp->next;
	if(temp->next!=NULL)
	{

	temp->next->prev=temp->prev;
	}
	delete temp;
}

void display(node* head)
{
	cout<<"NULL ";
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
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
	display(head);
	deleteathead(head);
	display(head);

	return 0;
}