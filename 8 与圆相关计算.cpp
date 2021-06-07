#include<cstdio>
using namespace std;
double pi=3.14159;
int main()
{
	double r,d,l,s;
	scanf("%lf",&r);
	d=2*r;
	l=pi*d;
	s=r*r*pi;
	printf("%0.4lf",d);
	printf(" ");
	printf("%0.4lf",l);
	printf(" ");
	printf("%0.4lf",s);
	return 0;
}
