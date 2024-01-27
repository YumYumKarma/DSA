#include<bits/stdc++.h>
using namespace std;

int count(int x)
{       if (x==0) return 1;
	int res=0;
	while(x>0){
		x=x/10;
		res++;
	}

	return res;
}

int main()
{
	int x=7861;
	int n=count(x);
	cout<<n;
}
