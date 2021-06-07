#include<bits/stdc++.h>
using namespace std;
double x,n,m,c,tot;
double i=1,j=2;
void function(double x,double n)
{
	for(double k=1;k<=m;k+=1)	  
		  {
		  tot=sqrt(x+n);
		  x=tot;
		  n+=1;
	      }
	    printf("%0.2lf",tot);
}
int main()
{
    cin>>x>>n;
    m=n;
    n=1;
    function(x,n);
    return 0;
}
