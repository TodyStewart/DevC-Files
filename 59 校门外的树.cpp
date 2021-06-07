#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
	int m,n,x,y,t=0;
	cin>>m>>n;
	for(int i=0;i<=m;i++)
	  a[i]=1;
	for(int j=1;j<=n;++j)
	{
		cin>>x>>y;
		for(int i=0;i<=m;i++)
		{
		if(i>=x&&i<=y)
		a[i]=0;
	    }
	}
	for(int i=0;i<=m;i++)
	{
		if(a[i]!=0)
		t++;
	}
    cout<<t;
    return 0;
}
