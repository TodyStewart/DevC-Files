#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b=2;
	int i=0;
	cin>>a;
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
	return 0;
}
