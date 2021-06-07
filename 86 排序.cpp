#include<bits/stdc++.h>
using namespace std;
int a;
int num[3000];
int i=0;
void bubble(int);
int main()
{
	cin>>a;
	for(int i=0;i<a;i++)
	  cin>>num[i];
	bubble(a);
	for(int i=0;i<a;i++)
	  cout<<num[i]<<' ';
	return 0;
}
void bubble(int a)
{
	for(int k=0;k<a;k++)
	for(int j=0;j<a;j++)
	if(num[j]>=num[j+1]&&num[j+1]) swap(num[j],num[j+1]);
}

