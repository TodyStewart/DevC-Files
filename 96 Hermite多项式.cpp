#include<bits/stdc++.h>
using namespace std;
int n,x;
double hermite(int n,int x)
{
	if(n==0)
	 return 1;
	if(n==1)
	 return 2*x;
	if(n>1)
	 return (2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x));
}
int main()
{
	cin>>n>>x;
	printf("%0.2f",hermite(n,x));
	return 0;
}
