#include<bits/stdc++.h>
using namespace std;

void merge_sort(int arr1[],int arr2[],int m,int n)
{
	int arr[m+n];
	int i=0,j=0,k=0;
	
	while(i<m && j<n)
	{
		if(arr1[i]<arr2[j]){
			arr[k++]=arr1[i++];
		}else {
			arr[k++] =arr2[j++];
		}
	}

	while(i<m){
		arr[k++] = arr1[i++];
	}
	while(j<n){
		arr[k++] = arr2[j++];
	}

	for(int l=0;l<m+n;l++)
	{
		cout<<arr[l]<<" ";
	}
}

int main()
{
	int arr1[]={1,3,5,7,9};
	int arr2[] ={2,4,6,8};
	int m=5,n=4;
	merge_sort(arr1,arr2,m,n);

	return 0;
}

