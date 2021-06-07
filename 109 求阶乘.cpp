#include<bits/stdc++.h>
using namespace std;
int a[500000],b[500000],c[500000],lena,lenb,lenc,i,x,n,l,j,p;
char ac[500000],bc[500000],cc[500000];
void counter(char bc[])
{
    if(j==p-1)
      return;
for(int m=0;m<lena;m++)
    strcpy(ac,cc);
    for(int m=0;m<lenb;m++)
      bc[m]=NULL;
    for(int m=1;m<=lenc;m++)
       {c[m]=0; cc[m-1]=NULL;}
    lena=1;
    lenc=1;
    memset(a,0,sizeof(a));
    a[1]=1;
    x=0;
    while(lenc<=lena||lenc<=lenb){
      c[lenc]=a[lenc]+b[lenc]+x;
      x=c[lenc]/10;
      c[lenc]%=10;
      lenc++;
      }
    c[lenc]=x;
    if(c[lenc]==0)
      lenc--;
    for(int m=0;m<lenc;m++)
      cc[m]=c[lenc-m]+48;
    strcpy(bc,cc);
    for(int m=0;m<=lenc;m++)
       {c[m]=0; cc[m-1]=NULL;}
}
void multi(int j)
{
     memset(a,0,sizeof(a));
     memset(b,0,sizeof(b));
     memset(c,0,sizeof(c));
    lena=strlen(ac);
    lenb=strlen(bc);
    for(int m=0;m<lena;m++)
      a[lena-m]=ac[m]-48;
    for(int m=0;m<lenb;m++)
      b[lenb-m]=bc[m]-48;
    for(int m=1;m<=lena;m++)
    {
       x=0;
        for(n=1;n<=lenb;n++){
          c[m+n-1]=a[m]*b[n]+c[m+n-1]+x;
          x=c[m+n-1]/10;
          c[m+n-1]%=10;
          }
         c[m+lenb]=x;
    }
    lenc=lena+lenb;
   //cout<<a[1]<<endl<<b[1]<<endl<<c[2]<<c[1]<<endl;
    while(c[lenc]==0&&lenc>1)
        lenc--;
    for(int m=0;m<lenc;m++){
      cc[m]=c[lenc-m]+48;
  }
}
int main()
{
	cin>>p;
	ac[0]='1';
	bc[0]='2';
      if(p==1)
		{
			cout<<1<<endl;
			return 0;
		}
          
	for(j=1;j<=p-1;j++)
	{
         if(j>p-1)
              {j+=1245;break;}
		multi(j+1);
                counter(bc);
	}
       for(int k=lenc;k>=1;k--)
         cout<<c[k];
       cout<<endl;
       return 0;
}
