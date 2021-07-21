#include<bits\stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}

};

int height(Node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int lHeight = height(root->left);
	int rHeight = height(root->right);

	return max(lHeight , rHeight) + 1;
}

int diameter(Node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int currDia = height(root->left) + height(root->right) + 1;
	int leftdia = diameter(root->left);
	int rightdia = diameter(root->right);

	return max(currDia ,max( leftdia , rightdia));
}

int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->left->left = new Node(6);

	cout<<diameter(root);

	return 0;
}

/*


	 1
	/ \
   2   3
  / \
 4   5


*/