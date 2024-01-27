#include<stdio.h>

int largestElement(int arr[], int n){
	int largest=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[largest]) largest=i;
	}

	return largest;
}

int main(){
	int arr[]= {34,89,99,56,67,87,12},n=7;
	int max=largestElement(arr,n);
	printf("Largest Element in the array is %d",arr[max]);
}
