#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h=999,l=100,t=0,b,s,g;
	for(n=100;n>=l&&n<=h;n++)
	{
		b=n/100;
		s=(n%100)/10;
		g=n%10;
		if(n==(b*b*b)+(s*s*s)+(g*g*g))
		  t++;
	}
	cout<<t;
	return 0;
}
