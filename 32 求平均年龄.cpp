#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a=1,b,z=0;
	double avg;
	scanf("%d",&n);
	while(a<=n)
	  {
	  scanf("%d",&b);
	  z=z+b;
	  a++;
      }
	avg=(double)z/n;
	printf("%0.2lf",avg);
	return 0;
}
