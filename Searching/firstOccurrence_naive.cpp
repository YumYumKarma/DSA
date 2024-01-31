//O(n) solution
#include<bits/stdc++.h>
using namespace std;

int firstoccurrence(int arr[], int n, int key)
{
	for(int i=0;i<n;i++){
		if(arr[i]==key) return i;
	}

	return -1;
}

int main()
{
	int arr[] ={1,2,3,4,5,6,7,8,9}, n=9,key=5;
	int res = firstoccurrence(arr,n,key);

	cout<<res;

	return 0;
}
