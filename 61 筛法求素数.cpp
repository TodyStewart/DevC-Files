#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d,e,f=0,g;
	cin>>g;
	if(g==2)
	cout<<2;
	if(g==3)
	cout<<2<<endl<<3<<endl;
	else
	cout<<2<<endl<<3<<endl;
	for(b=4;b>=0&&b<=g;b++)
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
		  cout<<b<<endl;;
		  
	}

	return 0;
}
