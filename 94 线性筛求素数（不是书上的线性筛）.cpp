#include<bits/stdc++.h>
using namespace std;
int b,x,y;
bool prime[30000001];
void judgeprime(int b)
{
    for(int z=1;z<b;z++) 
	  prime[z]=true;
    prime[1]=false;
	for(x=2;x<=sqrt(b);x++)
	  if(prime[x])
        for(y=2;y<=b/x;y++)
         if(prime[x*y]) prime[x*y]=false;
   for(int i=0;i<b;i++)
   if(prime[i]==true)
     printf("%d\n",i);
}
int main()
{
    cin>>b;
    judgeprime(b);
    return 0;
}
