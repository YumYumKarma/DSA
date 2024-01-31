//O(log n)
#include<bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int low, int high,int n,int key)
{
	while(high>=low){
		int mid=(high+low)/2;
		if(arr[mid]>key)
		{
			high=mid-1;
		}else if(arr[mid]<key){
			low=mid+1;
		}else{
			if(mid==n-1||arr[mid]!=arr[mid+1]){
				return mid;
			}
			else {
				low=mid+1;
			}
	              }
		
      }

	return -1;
}

int main()
{
	int arr[]={12,14,14,14,15,15,17,18},n=8,low=0,high=n-1,key=14;
	int res = lastocc(arr, low, high, n, key);
	cout<<res;

	return 0;

}

