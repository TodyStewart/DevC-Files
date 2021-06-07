#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<=m-1;++i)
      for(int j=0;j<=n-1;++j)
        cin>>a[i][j];
    int t=0;
    for(int i=0;i<=m-1;++i)
      for(int j=0;j<=n-1;++j)
        {
        if(i==0||i==m-1||j==0||j==n-1)
          t=t+a[i][j];
        }
    cout<<t;
    return 0;
}
