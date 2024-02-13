//theta n time and theta n space
#include<bits/stdc++.h>
using namespace std;

int remDups(int arr[], int n){
	int temp[n];
	temp[0] = arr[0];
	int res=1;
	for(int i=0;i<n;i++){
		if(temp[res-1]!=arr[i]){
			temp[res]=arr[i];
			res++;
		}
	}

	for(int i=0;i<res;i++){
		arr[i]=temp[i];
	}

	return res;
}

int main()
{
	int arr[] = {10,10,10,11,12,12,14,14,16} , n = 9;
	cout<<"array before removing Duplicates :"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	n = remDups(arr,n);
	cout<<"\n";
	cout<<"array after removing duplicates :"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}
