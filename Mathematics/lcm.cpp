//time complexity : O(a*b - max(a,b))
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	int res = max(a,b);
	while(true)
	{
		if(res%a==0 && res%b==0)
		{
			return res;
		}

		res++;
	}
}

int main()
{
	int a = 15, b= 13;
	int c = gcd(a,b);
	printf("The LCM of %d and %d is %d ",a,b,c);

	return 0;
}

