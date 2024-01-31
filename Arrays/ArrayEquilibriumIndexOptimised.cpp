//O(n) approach
#include<bits/stdc++.h>
using namespace std;

int eqindex(int arr[],int n)
{
	int sum =0;
	int leftsum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum-=arr[i];
		if(sum==leftsum) return i;

		leftsum+=arr[i];
	}

	return -1;
}

int main()
{
	int arr[]={-7,1,5,2,-4,3,0};
	int n=7;
	int res = eqindex(arr,n);
	cout<<res;

	return -1;
}
