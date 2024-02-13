//O(n) time and O(1) space
#include<bits/stdc++.h>
using namespace std;

int remDups(int arr[], int n)
{
	int res=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res-1]!=arr[i])
		{
			arr[res]=arr[i];
			res++;
		}
	}

	return res;
}

int main()
{
	int arr[]={1,1,1,2,3,4,5,6,6,7,7,7}, n = 12;
	cout<<"array before removing the duplicates :"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	n = remDups(arr,n);

	cout<<"\narray after removing duplicates :"<<"\n";

	for(int i=0;i<n;i++) cout<<arr[i]<<" ";

	return 0;
}


