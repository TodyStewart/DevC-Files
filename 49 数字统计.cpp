#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,d=0;
	cin>>a>>c;
	for(b=a;b>=a&&b<=c;b++)
	{
		if(b%10==2)
		  d++;
		if((b/10)%10==2)
		  d++;
		if((b/100)%10==2)
		  d++;
		if((b/1000)%10==2)
		  d++;
	}
	cout<<d;
	return 0;
}
