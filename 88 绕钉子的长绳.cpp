#include<bits/stdc++.h>
using namespace std;
const double pi=3.14159265;
int n;
double r,x[100],y[100],rou,line[100],tot=0; 
void distance(int,double);
int main()
{
    cin>>n>>r;
    for(int i=0;i<n;i++)
      cin>>x[i]>>y[i];
    distance(n,r);
	return 0;
}
void distance(int n,double r)
{
   rou=pi*r*2;
   for(int j=0;j<n;j++)
    {
     if(x[j+1]!=NULL||y[j+1]!=NULL)
	   line[j]=sqrt((x[j]-x[j+1])*(x[j]-x[j+1])+(y[j]-y[j+1])*(y[j]-y[j+1]));
	 if(x[j+1]==NULL&&y[j+1]==NULL)
	   {
	   x[j+1]=x[0];
	   y[j+1]=y[0];
	   line[j]=sqrt((x[j]-x[j+1])*(x[j]-x[j+1])+(y[j]-y[j+1])*(y[j]-y[j+1]));
	   break;
      }
    }
    for(int j=0;j<n;j++)
      tot+=line[j];
    tot+=rou;
    printf("%0.2lf",tot);
}

