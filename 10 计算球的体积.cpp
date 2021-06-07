#include<cstdio>
using namespace std;
const double pi=3.14;
int main()
{
	double r,v;
	scanf("%lf",&r);
	v=pi*r*r*r*4/3;
	printf("%.2lf",v);
	return 0;
}
