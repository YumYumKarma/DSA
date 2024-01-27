#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
	int top;
public:
	int a[MAX];
	Stack(){ top=-1;}

	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x )
{
	if(top>=(MAX-1)){
		cout<<"stack overflow";
		return false;
	}

	else {
		a[++top]=x;
		cout<<x<<" pushed into the stack\n";
		return true;
	}
}

int Stack::pop()
{
	if(top<0){
		cout<<"Stack underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}

int Stack::peek()
{
	if(top<0){
		cout<<"Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top<0);
}

int main()
{
    class Stack s;
    s.push(12);
    s.push(11);
    s.push(67);
    cout<<s.pop()<<" popped from stack\n";
    cout<<"Top element is : "<<s.peek()<<endl;
    cout<<"Elements present in stack :";
    while(!s.isEmpty())
    {
	    cout<<s.peek()<<" ";
	    s.pop();
    }
    return 0;
}




