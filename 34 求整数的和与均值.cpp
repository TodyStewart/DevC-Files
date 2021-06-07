#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z;
	int a,b=0;
	double c;
	scanf("%d",&n);
	while(z<n)
	  {
	  	scanf("%d",&a);
	  	b=b+a;
	  	z++;
	  }
	  c=(double)b/n;
	  printf("%d",b);
	  printf(" ");
	  printf("%0.5lf",c);
	return 0;
}
