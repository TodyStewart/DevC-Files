#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,z,a=0;
	cin>>m>>n;
	for(z=m;z>=m&&z<=n;z++)
	{
		if(z%17==0)
		a+=z;
	}
	cout<<a;
	return 0;
}
