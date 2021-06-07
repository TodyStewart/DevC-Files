#include<bits/stdc++.h>
using namespace std;
char a[100];
int b[131];
int r;
int k=2;
int m=0;
int main()
{
	b[130]=200;
	cin>>a;
	for(int i=0;i<strlen(a);i++)
	{
		b[a[i]]+=1;
	}
	for(int i=0;i<129;i++)
	  if(b[i])
	    b[129]=max(b[i],b[129]);
	for(int i=0;i<129;i++)
	  if(b[i])
	    b[130]=min(b[i],b[130]);
	r=b[129]-b[130];
    if(r==2)
      {
      cout<<"Lucky Word"<<endl<<r;
      m=2;
      } 
	  if(r<2)
        {
        cout<<"No Answer"<<endl<<'0';
        m=2;
       }
	while(k<r&&(r!=2))
	{
		if(r%k==0)
		{
			m=1;
			break;
		}
	  k++;
	}
	switch(m)
	{
	  case 0: cout<<"Lucky Word"<<endl<<r; break;
	  case 1: cout<<"No Answer"<<endl<<'0'; break;
    } 
  	return 0;
}
