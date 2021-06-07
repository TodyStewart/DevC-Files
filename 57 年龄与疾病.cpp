#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    double b,c=0,d=0,e=0,f=0,g,h,x,j;
    int i=1;
    scanf("%lf",&b);
    while(i<=b)
    {
    	cin>>a[i];
    	i++;
    }
    i=0;
    while(i<b)
    {
    	i+=1;
    	if(a[i]>=0&&a[i]<=18)
    	  c+=1;
    	if(a[i]>=19&&a[i]<=35)
    	  d+=1;
    	if(a[i]>=36&&a[i]<=60)
    	  e+=1;
    	if(a[i]>=61)
    	  f+=1;
    }
    g=c/b;
    h=d/b;
    x=e/b;
    j=f/b;
    printf("%0.2lf",g*100); 
    cout<<"%"<<endl;
    printf("%0.2lf",h*100); 
    cout<<"%"<<endl;
    printf("%0.2lf",x*100);
    cout<<"%"<<endl;
    printf("%0.2lf",j*100);
    cout<<"%";
	return 0;
}
