#include<bits/stdc++.h>
using namespace std;

struct MyStack{
	vector<int> v;
	void push(int x){
		v.push_back(x);
	}

	int pop(){
		int res=v.back();
		v.pop_back();
		return res;
	}

	int peek() {
		return v.back();
	}

	int size() {
		return v.size();
	}

	bool isEmpty(){
		return v.empty();
	}
};

int main() 
{
	MyStack s;
	s.push(12);
	s.push(67);
	s.push(43);
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.isEmpty()<<endl;

	return 0;
}
