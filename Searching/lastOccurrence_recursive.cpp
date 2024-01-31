#include<bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int low, int high, int key,int n)
{
	if(high>=low)
	{
		int mid=(high+low)/2;
		if(arr[mid]>key){
			return lastocc(arr,low,mid-1,key,n);
		}else if(arr[mid]<key){
			return lastocc(arr, low=mid+1,high,key,n);
		}else
		{
			if(mid==n-1||arr[mid]!=arr[mid+1]){
				return mid;
			}else {
				return lastocc(arr,mid+1,high,key,n);
			}
		}
	}
	return -1;
}

int main()
{
	int arr[]={12,13,14,15,16,16,16,28},n=8;
	int low=0,high=n-1,key=16;
	int res=lastocc(arr,low,high,key,n);
	cout<<res;

	return 0;
}

