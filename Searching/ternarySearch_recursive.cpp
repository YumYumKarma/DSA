//O(log(3)N) complexity
#include<bits/stdc++.h>
using namespace std;

int ternarysearch(int arr[],int low, int high, int key)
{
	if(high>=low)
	{
		int mid1=low + (high-low)/3;
		int mid2 = high - (high-low)/3;

		if(arr[mid1] == key) return mid1;
		if(arr[mid2] == key) return mid2;

		if(key<arr[mid1])
		{
			return ternarysearch(arr,low,mid1-1,key);
		}
		if(key>arr[mid2])
		{
			return ternarysearch(arr,mid2+1,high,key);
		}
		else {
			return ternarysearch(arr,mid1+1,mid2=1,key);
		}
	}

	return -1;
}

int main()
{
	int arr[] = {23,14,11,54,18,99,69,78,65}, n=9;
	int low=0,high=n-1;
	int res = ternarysearch(arr,low,high,69);
	cout<<res;

	return 0;
}
