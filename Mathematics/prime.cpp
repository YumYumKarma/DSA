//O(n) solution

#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	if(n<=1) return false;
	for(int i=2;i<n;i++)
	{
		if(n%i==0) return false;
	}

	return true;
}

int main()
{
	int n=13;
	isprime(n)? cout<<"yes" : cout<<"no";

	return 0;
}
