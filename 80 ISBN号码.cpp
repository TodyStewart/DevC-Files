#include<bits/stdc++.h>
using namespace std;
char isbn[13];
int a[13];
int b=0,c=0;
char d;
int main()
{
      cin>>isbn;
      for(int i=0,n=1;i<strlen(isbn)-2;i++)
      {
      	if(isbn[i]!='-')
      	{
      		a[i]=(int)isbn[i]-48;
      		a[i]*=n;
      		n++;
      	}
      }
      for(int i=0;i<=12;i++)
      {
      	b+=a[i];
      	c=b%11;
      	if(c==10)
      	  d='X';
      	else d=(char)c+48;
      }
      if(isbn[12]==d)
        cout<<"Right";
      else
      {
      	for(int i=0;i<12;i++)
      	  cout<<isbn[i];
      	cout<<d;
      }
	  return 0;
}
