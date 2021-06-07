#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,z,a=0,b=0,c=0;
	cin>>m;
	for(z=1;z<=m;z++)
	{
		cin>>n;
		if(n==1)
		a++;
		if(n==5)
		b++;
		if(n==10)
		c++;
	}
	cout<<a<<endl<<b<<endl<<c;
	return 0;
}
