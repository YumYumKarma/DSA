//O(n) solution
#include<bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int n,int key)
{
	for(int i=n-1;i>=0;i--) {
		if(arr[i]==key){
			return i;
		}
	}

	return -1;
}

int main()
{
	int arr[] = {12,13,21,56,78,78,78,91}, n=8, key=78;
	int res=lastocc(arr,n,key);
	cout<<res;

	return 0;
}

