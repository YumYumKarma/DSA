#include<stdio.h>
#include<stdbool.h>

int largest_element(int arr[], int n){
	for (int i=0;i<n;i++){
		bool flag=true;
		for(int j=0;j<n;j++){
			if (arr[j]>arr[i]){
				flag=false;
				break;
			}
		}
		if (flag==true) return i;
	}
    return -1;
	
}

int main() {
	int arr[]={12,34,67,98,21,98}, n=6;

        int largest = largest_element(arr,n);	
	
	printf("largest element in array is %d ", arr[largest]);
}



