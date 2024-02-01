//O(n^2) solution
#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n)
{     
	if(n==0) return false;
	if(n==1) return true;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[j]<arr[i]){
				return false;
			}
		}
	}

	return true;
}

int main()
{
	int arr[] ={1,3,2,4,5,6,7}, n=7;
	bool res = checkSorted(arr,n);

	if(res==true){
		cout<<"Array is sorted!!";
	}else {
		cout<<"Array is not sorted!!";
	}


	return 0;
}
	
