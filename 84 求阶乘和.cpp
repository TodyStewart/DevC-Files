#include<bits/stdc++.h>
using namespace std;
long long temp;
void con(int i)
{
    temp=1;
	for(long long j=1;j<=i;j++)
	 temp*=j;

}
int main()
{
	long long n,t=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	  {
	  con(i);
	  t+=temp;
      }
	cout<<t;
	return 0;
}

