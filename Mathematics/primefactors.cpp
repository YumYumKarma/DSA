//O(n log(n)) solution

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
	if(x<=1) return false;
	if(x==2||x==3) return true;
	if(x%2==0||x%3==0) return false;

	for(int i=5;i*i<=x;i+=6)
	{
		if(x%i==0||x%(i+2)==0) return false;
	}

	return true;
}

void primefactors(int n)
{
	for(int i=2;i<n;i++)
	{
		if(isPrime(i)){
			int x =i;
			while(n%x==0)
			{
				cout<<i<<" ";
				x=x*i;
			}
		}
	}
}

int main()
{
	int n=315;
	primefactors(n);

	return 0;
}

