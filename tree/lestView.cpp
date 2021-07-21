#include<bits\stdc++.h>
using namespace std;



class Node{
public:
int data;
Node* left;
Node* right;


	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}

};


void leftView(Node* root)
{
	if(root == NULL)
	{
		return;
	}

	queue <Node*> q;
	q.push(root);

	while(!q.empty())
	{
		int n = q.size();

		

		for(int i=0;i<n;i++)
		{
			Node* cuur = q.front();
		    q.pop();

			if(i==0)
			{
				cout<<cuur->data<<" ";
			}

			if(cuur->left != NULL)
			{
				q.push(cuur->left);
			}

			if(cuur->right != NULL)
			{
				q.push(cuur->right);
			}
		}
	}
}

int main()
{

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7); 

	leftView(root);
}