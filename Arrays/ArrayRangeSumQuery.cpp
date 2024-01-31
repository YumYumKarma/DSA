#include<bits/stdc++.h>
using namespace std;

void range_sum(int arr[],int n,int q)
{
	int pre[n]={0};
	pre[n] = arr[0];
	int l,r,res;

	for (int i=1;i<n;i++) pre[i]=arr[i]+pre[i-1];

	for (int i=1;i<=q;i++)
	{
		cin>>l>>r;
		if(l==0) {
			res = pre[r];
			cout<<res;
			cout<<"\n";
		}
		else {
			res=pre[r]-pre[l-1];
			cout<<res;
			cout<<"\n";
		}
	}
}


int main() 
{
	int arr[]={4,5,3,2,5},n=5;
	int q=3;
        range_sum(arr,n,q);

	return 0;
}

