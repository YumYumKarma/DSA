#include<bits/stdc++.h>
using namespace std;

int main() 
{
	vector<int> v;

	//push elements
	for(int i=0;i<=5;i++){
		v.push_back(i);
	}

	cout<<"Size of the vector : "<<v.size()<<endl;

	//check if vector is empty or not
	if(v.empty()==false)
		cout<<"\nvector is not empty";
	else 
		cout<<"\nvector is empty";

	cout<<"\nOutput of begin and end: ";
	for (auto i = v.begin();i!=v.end(); ++i) cout<<*i<<" ";

	//insert at the begining
	v.emplace(v.begin(),12);
	cout<<"\nThe first element is: "<<v[0];

	//Insert at the end
	v.emplace_back(23);
        int n = v.size();
	cout<<"\nThe last element is: "<<v[n-1];

	//erase the vector
	v.clear();
	cout<<"\nVector size after erase(): "<<v.size();

	return 0;
}
