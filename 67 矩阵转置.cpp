#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x[100][100];
  int a,b;
  cin>>a>>b;
  for(int i=0;i<=a-1;i++)
  for(int j=0;j<=b-1;j++)
    cin>>x[i][j];
  for(int j=0;j<=b-1;j++)
  for(int i=0;i<=a-1;i++)
  {
  	cout<<x[i][j]<<" ";
  	if(i==a-1)
  	  cout<<endl;
  }
    return 0;
}
