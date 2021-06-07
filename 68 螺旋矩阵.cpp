#include<bits/stdc++.h>
using namespace std;
int x[1002][1002];
int main()
{
    int n,a,b,total;
    cin>>n;
    total=x[a=0][b=0]=1;
    while(total<n*n)
    {
    	while(b+1<n&&!x[a][b+1]) x[a][++b]=++total;
    	while(a+1<n&&!x[a+1][b]) x[++a][b]=++total;
    	while(a-1>=0&&!x[a-1][b]) x[--a][b]=++total;
    	while(b-1>=0&&!x[a][b-1]) x[a][--b]=++total;
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	  cout<<x[i][j]<<" ";
    	cout<<endl;
    }
    return 0;
}
