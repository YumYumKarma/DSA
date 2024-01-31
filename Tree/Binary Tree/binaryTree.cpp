#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node* left;
	struct Node* right;
	Node(int d){
		d=data;
		left=right=NULL;
	}
};

int main()
{
	Node* root = new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
}
