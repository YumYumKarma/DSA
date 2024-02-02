#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int d)
	{
		data=d;
		left=right=NULL;
	}
};

void kdistance(Node* root,int k)
{
	if(root==NULL) return;
	if(k==0) 
	{
		cout<<root->data<<" ";
	}else {
		kdistance(root->left,k-1);
		kdistance(root->right,k-1);
	}
}

int main()
{
    Node* root = new Node(12);
    root->left = new Node(11);
    root->right = new Node(15);
    root->right->left = new Node(18);
    root->right->right=new Node(12);
    root->right->left->left = new Node(77);
    root->right->left->right = new Node(76);

    kdistance(root,3);

    return 0;
}
		
