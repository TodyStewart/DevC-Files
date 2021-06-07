#include<bits/stdc++.h>
using namespace std;
int b,x,y;
int c;
bool prime[1030];
int tot=0;
char s[10];
void judgeprime(int);
int main()
{
    cin>>b;
    judgeprime(b);
    for(int k=11;k<=b;k++)
    {
    	if(prime[k]==true)
    	{
    	sprintf(s,"%d",k);
        int i=0,j=strlen(s)-1;
        while(i<j&&s[i]==s[j])
         {
         	++i;
         	--j;
         }
         if(i>=j)
           tot++;
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
