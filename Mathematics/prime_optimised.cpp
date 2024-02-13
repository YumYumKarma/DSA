//O(sqrt(n)) solution
#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
	if(n==1) return false;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}

	return true;
}

int main()
{
	int n=13;
	char *c;
	printf("Is %d a prime number? %s",n,isPrime(n)? c="yes":c="no");

	return 0;
}
