#include<bits/stdc++.h>
using namespace std;
int a,b,x,y;
int c;
bool prime[5000001];
int tot=0;
char s[10],f[1];
void judgeprime(int);
int main()
{
    cin>>a>>b>>f;
    judgeprime(b);
    for(int k=a;k>=a&&k<b;k++)
    {
    	if(prime[k]==true)
    	{
    	sprintf(s,"%d",k);
    	  if(strstr(s,f)!=NULL)
    	    {
    	    tot++;
    	    }
    	}
    }
    printf("%d",tot);
	return 0;
}
void judgeprime(int b)
{
    for(int z=0;z<b;z++) 
	  prime[z]=true;
    prime[1]=false;
	for(x=2;x<=sqrt(b);x++)
	  if(prime[x])
        for(y=2;y<=b/x;y++)
          prime[x*y]=false;
}
