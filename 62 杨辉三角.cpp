#include<bits/stdc++.h>
using namespace std;
int a[35][35];
int main()
{
	int b,i,c;
	while(scanf("%d",&b)==1)
	{
	for(i=1;i<=b;++i)
	{
		a[1][0]=1;
		for(c=0;c<=i-1;++c)
		{
			a[i][c]=a[i-1][c-1]+a[i-1][c];
		}
	}
	
	for(i=1;i<=b;++i)
	{
	cout<<1<<" ";
	for(c=1;c<=b;++c)
	  {
		  if(a[i][c])
	      cout<<a[i][c]<<" ";
      }
	cout<<endl;
	}
	cout<<endl;
	}
	return 0;
}
