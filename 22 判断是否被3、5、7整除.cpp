#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a;
	cin>>a;
	if((a%3==0)&&(a%5==0)&&(a%7==0))
	  cout<<"3 5 7";
	if((a%3!=0)&&(a%5==0)&&(a%7==0))
	  cout<<"5 7";
	if((a%3==0)&&(a%5!=0)&&(a%7==0))
	  cout<<"3 7";
	if((a%3==0)&&(a%5==0)&&(a%7!=0))
	  cout<<"3 5";
	if((a%3!=0)&&(a%5!=0)&&(a%7==0))
	  cout<<"7";
	if((a%3!=0)&&(a%5==0)&&(a%7!=0))
	  cout<<"5";
	if((a%3==0)&&(a%5!=0)&&(a%7!=0))
	  cout<<"3";
	if((a%3!=0)&&(a%5!=0)&&(a%7!=0)) 
	  cout<<"n";
	return 0;
}
