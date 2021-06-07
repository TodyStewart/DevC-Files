#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double a,b,c,x,y;
    scanf("%lf%lf%lf%lf",&x,&a,&y,&b);
    c=((y*b)-(a*x))/(b-a);
    printf("%0.1lf",c);
    return 0;
}
