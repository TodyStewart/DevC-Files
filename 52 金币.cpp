#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d,e=0,f,g;
	cin>>a;
	if(a==1)
	  cout<<"1";
	else
	for(b=2;b<=a;b++)
    {
    	c=((b-1)*b)/2;
    	if((a-c)>=0)
    	{
    		d=a-c;
    		e+=d;
    	}
    	if((a-c)<0)
    	  break;
    }
    cout<<e+a;
	return 0;
}

