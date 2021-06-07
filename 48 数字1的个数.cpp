#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,d=0;
	cin>>a;
	for(b=1;b<=a;b++)
	{
		if(b%10==1)
		  d++;
		if((b/10)%10==1)
		  d++;
		if((b/100)%10==1)
		  d++;
		if((b/1000)%10==1)
		  d++;
	}
	cout<<d;
	return 0;
}
