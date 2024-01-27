#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int x){
	int rev = 0;
	int temp = x;

	if(x=0) return 1;
	while(temp!=0)
	{
		int ld = temp%10;
		rev = rev*10+ld;
		temp=temp/10;
	}
	return (rev==x);
}

int main()
{
	int x=132;
	cout<<isPallindrome(x);
}

