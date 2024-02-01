//O(n) time complexity and O(H) space complexity
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
        struct Node* right;
	Node(int d)
	{
		data = d;
		left = right = NULL;
	}
};

int height(Node* root)
{
	if(root==NULL) {
		return 0;
	} else {
		return (1+max(height(root->left),height(root->right)));
	}
}

int main()
{
	Node* root = new Node(12);
	root->left= new Node(11);
	root->right = new Node(11);
	root->left->right= new Node(87);
	root->left->right->right=new Node(54);

	int res = height(root);

	cout<<res;

	return 0;
}

