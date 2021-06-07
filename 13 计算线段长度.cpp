#include<bits/stdc++.h>
using namespace std;
const double pi=3.14;
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf",&a,&b);
    scanf("%lf%lf",&c,&d);
    e=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%0.3lf",e);
	return 0;
}
