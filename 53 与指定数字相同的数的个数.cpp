#include<bits/stdc++.h>
using namespace std;
int b[110];
int main()
{
    int a,c,i,x=0;
    cin>>a;
    for(i=1;i<=a;i++)
      cin>>b[i];
    cin>>c;
    for(i=1;i<=a;i++)
	  {
	  if((b[i])==c)
       x++;
	}
    cout<<x;
	return 0;
}
