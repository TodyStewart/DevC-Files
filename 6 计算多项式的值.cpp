#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,x,y;
	scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
	y=(a*x*x*x)+(b*x*x)+(c*x)+d;
	printf("%0.7lf",y);
	return 0;
}
