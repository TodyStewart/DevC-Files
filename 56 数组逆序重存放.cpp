#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;
	cin>>b;
    int i=1,a[101];
    while(i<=b)
    {
    	cin>>a[i];
    	i++;
    }
    i=b;
    while(i<=b&&i>0)
    {
    	cout<<a[i]<<" ";
    	i--;
    }
	return 0;
}
