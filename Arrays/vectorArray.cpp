#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	//push elements in vector
	for (int i=0;i<=5;i++) v.push_back(i+10);

	cout<<"Size of the vector :"<< v.size();

	//check if vector is empty or not
	if(v.empty()==false)
		cout<<("\nVector is not empty");
	else 
		cout<<("\nVector is empty");

	cout<<"\nOutput of begin and end: ";
	for (auto i = v.begin(); i!=v.end(); ++i)
		cout<<*i<<" ";

	//insert at the begining
	v.emplace(v.begin(),5);
	cout<<"\nThe first element is: "<<v[0];

	//inserting at the end
	v.emplace_back(45);
	int n=v.size();
	cout<<"\nThe last element is "<<v[n-1];

	//erasing the vector
	v.clear();
	cout<<"\nVector size after the erase : "<<v.size();

	return 0;
}

