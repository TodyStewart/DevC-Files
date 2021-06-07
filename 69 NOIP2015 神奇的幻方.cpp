#include<bits/stdc++.h>
using namespace std;
int x[41][41];
int main()
{
    int n,a,b,total;
    cin>>n;
    x[a=0][b=(n+1)/2-1]=1;
    total=2;
    x[n-1][(n+1)/2-1]=n*n;
  	while(total<n*n)
    {
	  for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
   	 {
        
        	while(total-1==x[i][j]&&i==0&&j!=n-1) 
			  x[n-1][j+1]=total++;
        	while(total-1==x[i][j]&&i!=0&&j==n-1) 
			  x[i-1][0]=total++;
        	while(total-1==x[i][j]&&i==0&&j==n-1) 
			  x[i+1][j]=total++; 
        	while(total-1==x[i][j]&&i!=0&&j!=n-1)
        	{
        		if(x[i-1][j+1]==0)
        		  x[i-1][j+1]=total++; 
        		else x[i+1][j]=total++;
        	}
        }
     }
	for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	  cout<<x[i][j]<<" ";
    	cout<<endl;
    }
    return 0;
}
