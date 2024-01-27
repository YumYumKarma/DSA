#include<bits/stdc++.h>
using namespace std;

int fact(int x)
{       
	if(x==0) return 1;
	if(x==1) return 1;
	int res=1;
	for(int i=2;i<=x;i++) res=res*i;

	return res;
}

int main() 
{
	int x=5;
	cout<<fact(x);
}
