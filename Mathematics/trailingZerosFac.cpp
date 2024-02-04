#include<bits/stdc++.h>
using namespace std;

int trailingZeros(int x)
{
	int res = 1;
	for(int i=1;i<=x;i++){
		res*=i;
	}
	int count = 0;
	while(res%10==0)
	{
		count++;
		res=res/10;
	}

	return count;
}

int main()
{
	int x=10;
	int n = trailingZeros(x);
	cout<<n;

	return 0;
}


