#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num1=1,num2=1,numn,n,m,z,i;
	cin>>n;
	switch(n)
	{
		case 1: cout<<num1; break;
		case 2: cout<<num2; break;
		default:
		{
			for(m=3;m<=n;m++)
			{
				numn=num1+num2;
				num1=num2;
				num2=numn;
			}
			cout<<numn;
			break;
		}
	}
	return 0;
}
