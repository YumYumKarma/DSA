//O(sqrt(n) solution)

#include<bits/stdc++.h>
using namespace std;

void primefactors(int n)
{
	//eliminating the even values
	while(n%2==0)
	{
		cout<<2<<" ";
		n=n/2;
	}

	//we can skip over even values so we update i=i+2;
	for(int i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		}
	}

	if(n>2) cout<<n;
}


int main()
{
	int n=315;
	primefactors(n);

	return 0;
}



