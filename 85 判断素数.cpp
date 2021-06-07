#include<bits/stdc++.h>
using namespace std;
long long a,b=2;
int i=0;
void prime(long long);
int main()
{
	cin>>a;
	prime(a);
	return 0;
}
void prime(long long a)
{
	while(b<a)
	{
		if(a%b==0)
		{
			i=1;
			break;
		}
	  b++;
	}
	switch(i)
	{
	  case 0: cout<<"prime"; break;
	  case 1: cout<<"not prime"; break;
    }
}
