#include<bits/stdc++.h>
using namespace std;
const double pi=3.14;
int main()
{
	double C1,Sa,Sb,Va,Vb,r,h;
	scanf("%lf%lf",&r,&h);
	C1=pi*r*2;
	Sa=pi*r*r;
	Sb=4*pi*r*r;
	Va=4*pi*r*r*r/3;
	Vb=Sa*h;
	printf("C1=%0.1lf\n",C1);
	printf("Sa=%0.1lf\n",Sa);
	printf("Sb=%0.1lf\n",Sb);
	printf("Va=%0.1lf\n",Va);
	printf("Vb=%0.1lf\n",Vb);
	return 0;
}
