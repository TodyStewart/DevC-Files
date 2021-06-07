#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z=1,a,b=0;
	scanf("%d",&n);
	while(z<=n)
	  {
	  	scanf("%d",&a);
	  	if(a>b)
	  	  b=a;
	  	z++;  
	  }
	  printf("%d",b);
	return 0;
}
