#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a1[200],b1[200];
    int a[200],b[200],c[200],lena,lenb,lenc,i,x;
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
	if(strlen(a1)<strlen(b1)||(strlen(a1)==strlen(b1)&&(strcmp(a1,b1)<0)))
	{
		swap(a,b);
		swap(lena,lenb);
		cout<<'-';
	}
	lenc=1;
	x=0;
	while(lenc<=lena||lenc<=lenb)
	{
	if(a[lenc]>=b[lenc])
	 c[lenc]=a[lenc]-b[lenc];
	else
	{
		a[lenc]+=10;
		a[lenc+1]-=1;
		c[lenc]=a[lenc]-b[lenc];
	}
	  lenc++;
    }
    c[lenc]=x;
    while(c[lenc]==0&&lenc!=1)
      lenc--;
    for(i=lenc;i>=1;i--)
	  cout<<c[i];
    cout<<endl;
    return 0;
}
