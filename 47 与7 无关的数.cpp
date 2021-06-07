#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d=0;
	cin>>a;
	for(b=1;b<=a;b++)
	{
		if(b%7!=0&&b%10!=7&&b/10!=7)
		{
		c=b*b;
		d+=c;
        }
	}
	cout<<d;
	return 0;
}
