//o(n) time and O(w) space , w->width of tree
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int d)
	{
		data = d;
		left=right=NULL;
	}
};

void printLevel(Node* root)
{
	if(root==NULL) return;
	queue<Node *> q;
	q.push(root);
	while(q.empty()==false){
		Node* curr = q.front();
		q.pop();
		cout<<curr->data<<" ";
		if(curr->left!=NULL)
			q.push(curr->left);
		if(curr->right!=NULL)
			q.push(curr->right);
	}
}

int main()
{
	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->left->left =new Node(40);
	root->left->right = new Node(50);
	root->right->left = new Node(60);
	root->right->right = new Node(70);

	printLevel(root);
}
