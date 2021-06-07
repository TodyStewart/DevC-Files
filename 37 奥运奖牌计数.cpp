#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z=1,a,b,c,d=0,e=0,f=0,g;
	scanf("%d",&n);
	while(z<=n)
	  {
	  	scanf("%d%d%d",&a,&b,&c);
		d+=a;
		e+=b;
		f+=c;
		z++; 
	  }
    g=d+e+f;
	  printf("%d",d);
	  printf(" ");
	  printf("%d",e);
	  printf(" ");
	  printf("%d",f);
	  printf(" ");
	  printf("%d",g);
	return 0;
}
