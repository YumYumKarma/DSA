//O(log n)
#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int low, int high, int key)
{
	while(high>=low)
	{
		int mid=(high+low)/2;
		if(arr[mid]<key)
		{
			low=mid+1;
		}

		else if(arr[mid]>key){
			high=mid-1;
		}
		else{
			if(arr[mid]==key&&arr[mid-1]!=arr[mid]){
				return mid;
			}
			else{
				high=mid-1;
			}
		}
	}
	return -1;
}

int main() 
{
	int arr[]={12,13,14,21,21,21,21,23,78},n=9;
	int low=0,high=n-1,key=21;
	int res=firstocc(arr,low,high,key);
	cout<<res;

	return 0;
}
