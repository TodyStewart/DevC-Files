#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int b[110][110];
int c[110][110];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=m;j++)
	    cin>>a[i][j];
	for(int i=1;i<=m;i++)
	  for(int j=1;j<=k;j++)
	    cin>>b[i][j];
	for(int i=1;i<=n;i++)
	  for(int j=1;j<=k;j++)
	  	for(int k=1;k<=m;k++)
	    c[i][j]+=a[i][k]*b[k][j];
    for(int i=1;i<=n;i++)
    {
    
	  for(int j=1;j<=k;j++)
	  {
	  	cout<<c[i][j]<<" ";
	  }
	  cout<<endl;
    }
    return 0;
}
