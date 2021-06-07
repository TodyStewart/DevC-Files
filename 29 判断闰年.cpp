#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    if(a%100!=0)
    {
    	if(a%4==0)
    	  cout<<"y";
    	else cout<<"n";
    }
	if(a%100==0)
    {
    	if(a%400==0)
    	  cout<<"y";
    	else cout<<"n";
    }
	return 0;
}
