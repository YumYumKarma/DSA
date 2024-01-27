#include<bits/stdc++.h>
using namespace std;

int fact(int x)
{
	if(x==0) return 1;
	if(x==1) return 1;
	else return x*fact(x-1);
}

int main()
{
	int x=6;
	cout<<fact(x);
}
