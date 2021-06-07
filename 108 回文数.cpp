#include<bits/stdc++.h>
using namespace std;
int n,x,a[20000000],b[20000000],c[20000000],lena,lenb,lenc,temp,tmp,lft,tot;
char m[20000000],ac[20000000],bc[20000000],cc[20000000];
void HSP(char m[])
{
	strcpy(ac,m);
	lena=strlen(ac);
	for(int i=0;i<lena;i++)
	{
		bc[lena-i-1]=ac[i];
	}
	for(int i=0;i<lena;i++)
	{
		if(ac[i]<58)
		a[lena-i]=ac[i]-48;
		else a[lena-i]=ac[i]-87;
	}
	lenb=strlen(bc);
	for(int i=0;i<lenb;i++)
	{
		if(bc[i]<58)
		b[lenb-i]=bc[i]-48;
		else b[lenb-i]=bc[i]-87;
	}
	lenc=1;
	lft=0;
	while(lenc<=lena||lenc<=lenb)
	{
		c[lenc]=b[lenc]+a[lenc]+lft;
		lft=c[lenc]/n;
		c[lenc]%=n;
		lenc++;
	}
	c[lenc]=lft;
	if(c[lenc]==0)
	  lenc--;
	for(int i=0;i<lenc;i++){
	  if(c[lenc-i]<10)
	  cc[i]=c[lenc-i]+48;
	  else cc[i]=c[lenc-i]+87;
    }
	strcpy(m,cc);
	tot++;
	return;
} 
void JUDGE(char m[])
{
	lenc=strlen(m);
	int i=0,j=lenc-1;
	while((i<j)&&m[i]==m[j])
	  {
	  	i++;
	  	j--;
	  }
	if(i>=j)
	{
		tmp=1;
		temp=1;
		for(int i=0;i<lenc;i++)
		  cout<<m[i];
	     cout<<endl;
	     cout<<tot;
	     return;
	}
	else return;
}
int main()
{
	cin>>n;
	cin>>m;
	for(tmp=0;tmp<1;)
	{
		JUDGE(m);
		if(temp==1)
		{
			break;
		}
		else HSP(m);
		if(tot==30){
		cout<<"impossible";
		return 0;}
	}
	return 0;
}
