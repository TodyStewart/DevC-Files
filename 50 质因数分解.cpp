#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c;
	cin>>a;
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		{
		  c=a/b;
		  cout<<c;
		  break;
	    }  
	}
	return 0;
}
