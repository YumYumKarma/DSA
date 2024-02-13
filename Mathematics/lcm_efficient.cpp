//O(log(min(a,b)) complexity
// based on the concept that a*b = gcd(a,b) * lcm(a,b); lcm(a,b) = a*b/gcd(a,b)

#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
	if(b==0) return a;
	
	return gcd(b,a%b);
}

int lcm(int a,int b)
{
	return (a*b/gcd(a,b));
}

int main()
{
	int a=15, b=17;
	int c = lcm(a,b);
	printf("LCM of %d and %d is %d",a,b,c);

	return 0;

}

