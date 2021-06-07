#include<bits/stdc++.h>
using namespace std;
char name[110][20],k3,k4;
int main()
{
	int n,k1,k2,k5,tot=0,s,temp,max=0;
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	  {
	  	scanf("%s%d%d%s%s%d",&name[i],&k1,&k2,&k3,&k4,&k5);
	  	temp=0;
	  	if((k1>80)&&(k5>=1))
	  	  temp+=8000;
	  	if((k1>85)&&(k2>80))
	  	  temp+=4000;
	  	if(k1>90)
	  	  temp+=2000;
	  	if((k1>85)&&(k4=='Y'))
	  	  temp+=1000;
	  	if((k2>80)&&(k3=='Y'))
	  	  temp+=850;
	  	tot+=temp;
	  	if(temp>max)
	  	{
	  		max=temp;
	  		s=i;
	  	}
	  }
     cout<<name[s]<<endl;
     cout<<max<<endl;
     cout<<tot;
	  return 0;
}
