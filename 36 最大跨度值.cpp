#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z=1,a,b=0,c=1000,x;
	scanf("%d",&n);
    while(z<=n)
	  {
	  	scanf("%d",&a);
		  if(a>b)
	  	  b=a;
	  	  if(a<c)
	  	  c=a;
	  	z++;  
	  }
	  x=b-c;
	  printf("%d",x);
	return 0;
}
