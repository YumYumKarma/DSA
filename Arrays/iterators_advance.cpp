#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v={1,2,3,69,5,6};

	vector<int>::iterator ptr = v.begin();

	advance(ptr, 3);

	cout<<"The element at postition afteradvancing the pointer is : ";
	cout<<*ptr<<" ";

	return 0;

}

