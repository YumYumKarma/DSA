#include<bits/stdc++.h>
using namespace std;

int eucGCD(int a, int b)
{
	if(b==0){
		return a;
	}
	else {
		return (b,a%b);
	}
}

int main()
{
	int a = 15,b=12;
	int c=eucGCD(a,b);
	printf("The GCD of %d and %d is %d", a,b,c);

	return 0;
}
