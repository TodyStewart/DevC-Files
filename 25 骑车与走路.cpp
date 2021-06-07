#include<bits/stdc++.h>
using namespace std;
int main()
{
	double s,tbike,twalk;
	const double bikespeed=3.0,walkspeed=1.2;
	cin>>s;
	tbike=(s/bikespeed)+50;
	twalk=(s/walkspeed);
	if(tbike>twalk)
	  cout<<"Walk";
	if(tbike<twalk)
	  cout<<"Bike";
	if(tbike==twalk)
	  cout<<"All";
	return 0;
}
