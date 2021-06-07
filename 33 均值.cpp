#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z=1;
	double a,b=0,c;
	scanf("%d",&n);
	while(z<=n)
	  {
	  	scanf("%lf",&a);
	  	b=b+a;
	  	z++;
	  }
	  c=(double)b/n;
	  printf("%0.4lf",c);
	return 0;
}
