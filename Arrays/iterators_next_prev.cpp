#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v={12,32,41,1,69,78,99};

	vector<int>::iterator ptr=v.begin();
	vector<int>::iterator ftr=v.end();

	//using next()
	auto it = next(ptr,3);

	//using prev()
	auto it1 = prev(ftr,3);

	cout<<"The postion of new iterator using next() is :";
	cout<<*it<<" ";
	cout<<endl;

	cout<<"The position of new iterator using prev() is :";
	cout<<*it1<<" ";
	cout<<endl;

	return 0;
}
