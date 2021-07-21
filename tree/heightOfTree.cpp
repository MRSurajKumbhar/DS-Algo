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

int height (Node* root)
{
	if(root == NULL)
	{
		return 0;
	}
	int lHeight = height(root->left);
	int rHeight = height(root->right);

	return max(lHeight , rHeight) + 1;
}


int main()
{

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<height(root);

}


/*


	 1
	/ \
   2   3
  / \
 4   5


*/