#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v= {1,2,3,4,5,6};

	//Declaring an iterator to a vector
	vector<int>::iterator ptr;

	cout<<"The elements in a vector are :\n";
	for(ptr = v.begin();ptr<v.end();ptr++){
		cout<<*ptr<<" ";
	}

	return 0;
}
