#include<bits/stdc++.h>
using namespace std;
int x[2000],y[2000],z[2000],in[2000],lenx,leny,lenz,i,j,k,l,m,n;
char xx[2000],yy[2000],zz[2000];
void cvt(char xx[],char yy[],char zz[]);
void fibboplus(char xx[],char yy[],char zz[])
{
	lenx=strlen(xx);
	leny=strlen(yy);
	for(k=0;k<=lenx-1;k++)
	  x[lenx-k]=xx[k]-48;
	for(k=0;k<=leny-1;k++)
	  y[leny-k]=yy[k]-48;
	lenz=1;
	m=0;
	while(lenz<=lenx||lenz<=leny)
	{
	  z[lenz]=x[lenz]+y[lenz]+m;
	  m=z[lenz]/10;
	  z[lenz]%=10;
	  lenz++;
    }
    z[lenz]=m;
    if(z[lenz]==0)
      lenz--;
    l++;
    if(l==in[i]-2)
    {
    for(k=lenz;k>=1;k--)
      cout<<z[k];
    cout<<endl;
    return;
    }
    else{
    	for(k=lenz-1;k>=0;k--)
	    zz[k]=z[lenz-k]+48;
    	cvt(xx,yy,zz);
    	fibboplus(xx,yy,zz);
    }
}
void cvt(char xx[],char yy[],char zz[])
{
	strcpy(xx,yy);
	strcpy(yy,zz);
	for(int p=0;p<lenz;p++)
	  zz[p]=NULL;
	return;
}
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	  cin>>in[i];
	for(i=0;i<n;i++)
	{
		if(in[i]==1||in[i]==2)
		{
			cout<<1<<endl;
			continue;
		}
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(z,0,sizeof(z));
		for(int p=0;p<lenz;p++)
	     zz[p]=NULL;
	     for(int p=0;p<lenx;p++)
	      xx[p]=NULL;
	      for(int p=0;p<leny;p++)
	       yy[p]=NULL;

		xx[0]='1';
		yy[0]='1';
		l=0;
		fibboplus(xx,yy,zz);
	}
	return 0;
}
