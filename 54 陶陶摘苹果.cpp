#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
	int b,c,d=0;
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>c;
	for(int i=1;i<=10;i++)
	{
		if(a[i]<=(c+30))
		  d++;
	}
	cout<<d;
	return 0;
}
