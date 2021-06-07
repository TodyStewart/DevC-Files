#include<bits/stdc++.h>
using namespace std;
int a[10009][10009];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
	   a[i][j]=0;	
    }
	for(int i=1;i<=n;i++)
     {
      a[n][i]=((1+i)*i)/2;
     }
    for(int i=2;i<=n;i++)
      a[n-(i-1)][1]=a[n][i]-(i-1); 
     for(int i=2;i<n;i++)
     {
     	for(int j=2;j<n;j++)
     	{
     	a[i][j]=a[i-1][j-1]+1;
     	}
     }
    for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=i;j++)
     	{
		 if(a[i][j])
     	{
		     cout<<a[i][j]<<" ";
		     if(j==i)
     		  cout<<endl;
     	}
     	}
     } 
    return 0;
}
