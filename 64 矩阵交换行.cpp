#include<bits/stdc++.h>
using namespace std;
int a[7][6];
int main()
{
    int i,j,x,y,m;
    for(m=1;m<=5;m++)
      cin>>a[m][1]>>a[m][2]>>a[m][3]>>a[m][4]>>a[m][5];
    cin>>i>>j;
    for(m=1;m<=5;m++)
      {
      if(m==i)
      {
		  for(int n=1;n<=5;n++)
      	  a[6][n]=a[i][n];
      }
      if(m==j)
      {
      	for(int n=1;n<=5;n++)
      	  a[i][n]=a[j][n];
		for(int n=1;n<=5;n++)
		  a[j][n]=a[6][n];
	  }
	  }
	  for(x=1;x<=5;x++)
      {
      	for(y=1;y<=5;y++)
      	  cout<<a[x][y]<<" ";
      	cout<<endl;
      }
    return 0;
}
