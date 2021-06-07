#include<bits/stdc++.h>
using namespace std;
char a1[2000],b1[2000];
int a[2000],b[2000],c[4000000],lena,lenb,lenc,i,x;
int main()
{
	
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
	gets(a1);
	gets(b1);
	lena=strlen(a1);
	lenb=strlen(b1);
	for(i=0;i<=lena-1;i++)
	  a[lena-i]=a1[i]-48;
	for(i=0;i<=lenb-1;i++)
	  b[lenb-i]=b1[i]-48;
	for(int i=1;i<=lena;i++)
	{
		x=0;
		for(int j=1;j<=lenb;j++)
		{
			c[i+j-1]=a[i]*b[j]+x+c[i+j-1];
			x=c[i+j-1]/10;
			c[i+j-1]%=10;
		}
		c[i+lenb]=x;
	}
	lenc=lena+lenb;
    while(c[lenc]==0&&lenc>1)
      lenc--;
    for(i=lenc;i>=1;i--)
	  cout<<c[i];
    cout<<endl;
    return 0;
}
