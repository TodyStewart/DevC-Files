#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d,e,f=0,g;
	cin>>a>>g;
	for(b=a;b>=a&&b<=g;b++)
	{
		for(d=2;d<=sqrt(b);d++)
		{
			c=b%d;
			switch(c)
            {
              	case 0: e=2; break;
             	default: e=1;break;
            }
            if(e==1)
              {
              	continue;
              }
            else break;
		}
		if(e==1)
		  f++;
		if(b==2)
		  f+=2;  
	}
	cout<<f;
	return 0;
}
