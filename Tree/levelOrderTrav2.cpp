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

void levelOrder(Node *root){
	if(root==NULL) return;
	queue<Node *> q;
	q.push(root);
	while(q.empty()==false)
	{
		int count=q.size();
		for(int i=0;i<count;i++){
			Node* curr=q.front();
			q.pop();
			cout<<curr->data<<" ";
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
		cout<<"\n";
	}
}

int main()
{
	Node* root = new Node(10);
	root->left = new Node(11);
	root->right = new Node(12);
	root->left->left = new Node(13);
	root->left->right = new Node(14);
	root->right->left = new Node(15);
	root->right->right = new Node(16);

	levelOrder(root);

	return 0;
}
