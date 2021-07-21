#include<bits\stdc++.h>
using namespace std;

class node{

public:
	int data ;
	node* next;

	node(int val)
{
	data = val;
	next=NULL;
}
};

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

node* globalhead = NULL;

void findmid(node* head , node** starta, node** startb)
{
	node* fast = head;
	node* slow = head;

	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}

	*starta = head;
	*startb = slow->next;
	slow->next=NULL;
}

node* merge(node* head1, node*head2 )
{
	node* dummyNode = new node(-1);
	node* ptr1 = head1;
	node* ptr2 = head2;
	node* ptr3 = dummyNode;

	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->data < ptr2->data)
		{
			ptr3->next=ptr1;
			ptr1=ptr1->next;
		}
		else{
			ptr3->next=ptr2;
			ptr2=ptr2->next;
		}
		ptr3=ptr3->next;
	}

	while(ptr1!=NULL)
	{
		ptr3->next=ptr1;
		ptr1=ptr1->next;
		ptr3=ptr3->next;
	}
	while(ptr2!=NULL)
	{
		ptr3->next=ptr2;
		ptr2=ptr2->next;
		ptr3=ptr3->next;
	}
	return dummyNode -> next;

}

void mergeSort(node* head)
{
	node* a=NULL;
	node* b=NULL;

	if(head==NULL && head->next==NULL)
	{
		return;
	}

	findmid(head,&a,&b);
	mergeSort(&a);
	mergeSort(&b);

	globalhead = merge(a,b);
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
	mergeSort(head);
	display(globalhead);
	return 0;
}