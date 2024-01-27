#include<bits/stdc++.h>
using namespace std;

int main()
{       
	//using binary_search() on a vector
	vector<int> vec={1,2,3,4,5,6,7,8,9};

	if(binary_search(vec.begin(),vec.end(),19))
		cout<<"19 is present in the vector";
	else
		cout<<"19 is not present in the vector";

	cout<<endl;

	//using binary_search() on an array
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);

	if (binary_search(arr,arr+n,7))
		cout<<"7 is present in the array";
	else 
		cout<<"7 is not present in the array";

	return 0;
}
