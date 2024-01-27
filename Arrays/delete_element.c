#include<stdio.h>

int deleteElement(int arr[],int n, int x){
	int i=0;
	for(i=0;i<n;i++){
		if (arr[i]==x)
			break;
	}

	if(i==n) return n;

	for(int j=i;j<n-1;j++){
		arr[j]=arr[j+1];
	}

	return (n-1);
}

int main() {
	int arr[] = {12,21,36,47,52,69}, n=6, x = 21;
	printf("Before Deletion : ");
	for (int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}

	n = deleteElement(arr,n,x);
	printf("\nAfter Deletion : ");
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}

