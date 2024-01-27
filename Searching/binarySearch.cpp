#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int n, int x)
{       int low=0,high=n-1; 
	while(low <= high)
	{       
		int mid=(high+low)/2;
		if(arr[mid]==x) return mid;
		else if(arr[mid]>x){
			high=mid-1;
		} else {
			low=mid+1;
		}
	}
	return -1;
}

int main() 
{
	int arr[]={12,32,45,52,55,67,76}, n=7,x=12;
	int idx=binarySearch(arr,n,x);
	cout<<"Element present at index : "<<idx;
}
