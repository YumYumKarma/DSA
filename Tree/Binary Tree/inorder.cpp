#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int d){
		data=d;
		left=right=NULL;
	}
};

void inorder(Node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main() 
{
	Node* root= new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left= new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);

	inorder(root);
}






