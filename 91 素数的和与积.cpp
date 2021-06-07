#include<bits/stdc++.h>
using namespace std;
int b,x,y;
int c;
bool prime[10000];
int tot[10000];
int m=0;
void judgeprime(int);
int main()
{
    cin>>b;
    judgeprime(b);
    for(int k=1;k<=b;k++)
    {
      for(int l=1;l<=b;l++)
       if(prime[k]==true&&prime[l]==true&&b==l+k)
          {
          tot[m]=l*k;
          m++;
         }
    }
    for(int o=0;o<=m;o++)
      for(int n=0;n<=m;n++)
        if(tot[n]<tot[n+1]) swap(tot[n],tot[n+1]);
   cout<<tot[0];
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
