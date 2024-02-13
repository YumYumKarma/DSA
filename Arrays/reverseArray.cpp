#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
	int low = 0, high =n-1;
	while(low<high){
		
			int temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
			low++;
			high--;
		
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9},n=9;
	cout<<"Before reversing"<<"\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	reverse(arr,n);
	cout<<"\n";
	cout<<"After reversing"<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
