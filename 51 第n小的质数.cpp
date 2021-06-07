#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d,e,f=2,g;
	cin>>a;
	if(a==1)
	{
		cout<<2;
	}
	if(a==2)
	{
		cout<<3;
	}
	else
	for(b=4;b>=0;b++)
	{
		for(d=2;d<=sqrt(b);d++)
		{
			c=b%d;
			switch(c)
            {
              	case 0: e=2; break;break;
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
		if(f==a)
		  {
		  	cout<<b;
		  	break;
		  }
	}
	return 0;
}
