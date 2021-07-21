#include<bits\stdc++.h>
using namespace std;

struct Node{

	int data;
	struct Node* left;
	struct Node* right;

	Node(int val)
	{
		data = val;
		left =NULL;
		right = NULL;
	}
};


int search(int inorder[],int start,int end,int val)
{
	for(int i=start;i<=end;i++)
	{
		if(inorder[i]==val)
		{
			return i;
		}
	}

	return -1;
}


Node* buildTree(int postoredr[] , int inorder[],int start, int end)
{
	if(start > end)
	{
		return NULL;
	}
	static int idx = 4;
	int val = postoredr[idx];
	idx--;
	Node* curr = new Node(val);
	if(start == end)
	{
		return curr;
	}

	int pos = search(inorder,start,end,val);
	curr->right = buildTree(postoredr,inorder,pos+1,end);
	curr->left = buildTree(postoredr,inorder,start,pos-1);
	return curr;
}

void inorderPrint(Node* root)
{
	if(root == NULL)
	{
		return;
	}
	inorderPrint(root->left);
	cout<<root->data<<" ";
	 inorderPrint(root->right);
}

int main()
{
	int postoredr[]={4,2,5,3,1};
	int inorder[]={4,2,1,5,3};

	Node* root = buildTree(postoredr,inorder,0,4);
	inorderPrint(root);
}