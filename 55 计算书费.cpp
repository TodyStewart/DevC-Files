#include<bits/stdc++.h>
using namespace std;
int a[11];
int main()
{
    int b=1;
    double c=0;
    while(b>=1&&b<=10)
      {
      	cin>>a[b];
      	b++;
      }
    if(a[1])
      c+=28.9*a[1];
    if(a[2])
      c+=(double)32.7*a[2];
    if(a[3])
	  c+=(double)45.6*a[3];
	if(a[4])
	  c+=(double)78*a[4];
	if(a[5])
	  c+=(double)35*a[5];
	if(a[6])
	  c+=(double)86.2*a[6];
	if(a[7])
	  c+=(double)27.8*a[7];
	if(a[8])
	  c+=(double)43*a[8];
	if(a[9])
	  c+=(double)56*a[9];
	if(a[10])
	  c+=(double)65*a[10];
	cout<<c;
	return 0;
}
