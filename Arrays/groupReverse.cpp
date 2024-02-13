#include<bits/stdc++.h>
using namespace std;

void reverseGroup(int arr[],int n,int k)
{
	for(int i=0;i<n;i+=k){
		int left=i;
		int right=min(i+k-1,n-1);
		while(right<left){
			swap(arr[left++],arr[right++]);
		}
	}
}

int main()
{

	
