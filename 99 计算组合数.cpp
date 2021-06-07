#include<bits/stdc++.h>
using namespace std;
int combine(int a,int b)
{
	if(b==1)
	  return a;
	else if(a==b)
	  return 1;
    else
      return (combine(a-1,b)+combine(a-1,b-1));
}
int main()
{
	int a,b;
	cin>>a>>b;
	printf("%d",combine(a,b));
	return 0;
}

