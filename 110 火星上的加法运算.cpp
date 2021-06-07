#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a1[200],b1[200],c1[200];
    int a[200],b[200],c[200],lena,lenb,lenc,i,x;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
	cin>>a1;
	cin>>b1;
	lena=strlen(a1);
	lenb=strlen(b1);
	for(int i=0;i<lena;i++)
	{
		if(a1[i]<58)
		a[lena-i]=a1[i]-48;
		else a[lena-i]=a1[i]-87;
	}
	lenb=strlen(b1);
	for(int i=0;i<lenb;i++)
	{
		if(b1[i]<58)
		b[lenb-i]=b1[i]-48;
		else b[lenb-i]=b1[i]-87;
	}
	lenc=1;
	x=0;
	while(lenc<=lena||lenc<=lenb)
	{
		c[lenc]=b[lenc]+a[lenc]+x;
		x=c[lenc]/n;
		c[lenc]%=n;
		lenc++;
	}
	c[lenc]=x;
	if(c[lenc]==0)
	  lenc--;
	for(int i=0;i<lenc;i++){
	  if(c[lenc-i]<10)
	  c1[i]=c[lenc-i]+48;
	  else c1[i]=c[lenc-i]+87;
    }
    for(i=0;i<lenc;i++)
      cout<<c1[i];
    cout<<endl;
    return 0;
}
