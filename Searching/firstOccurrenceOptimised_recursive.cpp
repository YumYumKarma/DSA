//O(log n) approach
#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int low, int high, int key)
{
	if(high>=low)
	{
		int mid=(high + low)/2;
		if(key>arr[mid])
		{
			return firstocc(arr,mid+1,high,key);
		}
		else if(key<arr[mid])
		{
			return firstocc(arr,low,mid-1,key);
		}
		else {
			if(arr[mid]==key&&arr[mid-1]!=arr[mid])
				return mid;
			else
				return firstocc(arr,low,mid-1,key);
		}
	}

	return -1;
}

int main()
{       
	//Array should be sorted
	int arr[]={12,14,15,21,21,21,78,88,98},n=9;
	int low=0, high=n-1,key=21;
	int res=firstocc(arr,low,high,key);
	cout<<res;

	return 0;
}
