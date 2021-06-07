#include<bits/stdc++.h>
using namespace std;	
char group[10],comet[10];
int main()
{
    int cc=0,gg=0;

    gets(comet);
    gets(group);
    for(int i=0;i<10;i++)
    {
    	if(comet[i])
    	  cc++;
    	if(group[i])
    	  gg++;
    }
    int groupn[10],cometn[10];
    for(int i=0;i<gg;i++)
    	groupn[i]=(int)group[i]-64;
    for(int i=0;i<cc;i++)
       	cometn[i]=(int)comet[i]-64;
    int g=1,c=1,rg,rc;
    for(int i=0;i<gg;i++)
    	g*=groupn[i];
    for(int i=0;i<cc;i++)
    	c*=cometn[i];
    rg=g%47;
    rc=c%47;
    if(rg==rc)
      cout<<"GO";
    else
      cout<<"STAY";
	return 0;
}
