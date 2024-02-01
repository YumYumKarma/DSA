//checks for only increasing order
//O(n) solution
#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int n)
{       
	if(n==0) return false;
	if(n==1) return true;

	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			return false;
		}
		
	}

	return true;
}

int main(){
	int arr[]={2,3,4,5,6},n=5;
	bool res=checkSorted(arr,n);
	
	if(res==true){
		cout<<"Array is sorted!!";
	} else{
		cout<<"Array is not sorted!!";
	}

	return 0;
}

