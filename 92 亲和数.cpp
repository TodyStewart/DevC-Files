#include<bits/stdc++.h>
using namespace std;
long long a,b,x,y,temp1,temp2,tot;
bool prime[100000000];
void luckynumber(long long a,long long b)
{
	 for(int z=1;z<=b;z++) 
	  prime[z]=true;
    prime[1]=false;
	for(x=2;x<=sqrt(b);x++)
	  if(prime[x])
        for(y=2;y<=b/x;y++)
          prime[x*y]=false;
	  for(x=a;x<=b;x++)
     {
       if(x!=temp2&&!prime[x])
	  {
	   temp1=1; temp2=1;
	  for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)
          {
          temp1+=i;
          temp1+=(x/i);
          }
     if(temp1>x&&!prime[temp1])
	  {
	  for(int j=2;j<=sqrt(temp1);j++)
        if(temp1%j==0)
          {
          temp2+=j;
          temp2+=(temp1/j);
          }
         if(temp2==x)
           tot+=1;
       } 
    }
	          
  }
     printf("%ld",tot);
}
int main()
{
    cin>>a>>b;
    luckynumber(a,b);
    return 0;
}
