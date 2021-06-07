#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,r=0,t=1,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		t*=i;
		r+=t;
	}
	cout<<r;
	return 0;
}
