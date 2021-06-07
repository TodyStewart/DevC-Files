#include<bits/stdc++.h>
using namespace std;
int a;
int num1[10000],num2[10000],r[10000];
int i=0;
int temp;
void gcd(int);
int main()
{
	cin>>a;
	for(int i=0;i<a;i++)
	  cin>>num1[i]>>num2[i];
	gcd(a);
	return 0;
}
void gcd(int a)
{
	for(int j=0;j<a;j++)
	{
	if(num1[j]<=num2[j])
	  swap(num1[j],num2[j]);
	r[j]=num1[j]%num2[j];
	if(r[j]==0){
	  cout<<num2[j];
	  break;
   }
	while(r[j])
      {
      	r[j]=num1[j]%num2[j];
      	num1[j]=num2[j];
      	num2[j]=r[j];
      }    
    cout<<num1[j]<<endl;
    }
}

