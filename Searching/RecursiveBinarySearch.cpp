#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int low, int high , int x)
{
	if(low>high) return -1;
	int mid=(high+low)/2;
	if(arr[mid]==x) return mid;
	else if(arr[mid]>x) {
			return search(arr, low, mid, x);
	} else {
		return search(arr,mid,high,x);
	}

}

int main() 
{
	int arr[]={1,2,3,4,5,6,7,8,9},low=0,high=9,x=5;
	int idx=search(arr,low,high,x);
	cout<<"Element is present at position : "<<idx;
}

