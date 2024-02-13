#include<bits/stdc++.h>
using namespace std;

int eucGCD(int a, int b)
{
	while(a!=b)
	{
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}

	return a;
}

int main()
{
	int a = 6, b=2;
	int c = eucGCD(a,b);
	printf("GCD of %d and %d is : %d",a,b,c);

	return 0;
}
