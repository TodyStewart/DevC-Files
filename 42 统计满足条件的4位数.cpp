#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,z,b=0;
	cin>>m;
	for(z=1;z<=m;z++)
	{
       cin>>n;
       if(((n%10)-(n/1000)-((n%100)/10)-((n%1000)/100))>0)
         b++;
	}
	cout<<b;
	return 0;
}
