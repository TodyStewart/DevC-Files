#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	scanf("%lf",&x);
	if((x>=0)&&(x<5))
	  y=(-1*x)+2.5;
	if((x>=5)&&(x<10))
	  y=2-(1.5*(x-3)*(x-3));
	if((x>=10)&&(x<20))
	  y=(x/2)-1.5;
	printf("%0.3lf",y);
	return 0;
}
