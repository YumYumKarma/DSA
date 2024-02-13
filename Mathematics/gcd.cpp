//O(min(a,b)) time complexity

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b)
{
	int res = min(a,b);
	while(res>0){
		if(a%res==0 && b%res ==0) break;
		res--;
	}
	return res;
}

int main()
{
	int a=10,b=5;
	int x = gcd(a,b);

	printf("gcd of %d and %d is : %d",a,b,x);

	return 0;
}
