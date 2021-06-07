#include<bits/stdc++.h>
using namespace std;
char result[100000000];
char in[100][20];
int hua[2][10000],dui[2][10000];
int main()
{
      int j=0,r=1,z=0;
      for(int i=0;i<100;i++)
        {
        cin>>in[i];
        if(in[i][strlen(in[i])-1]=='E')
          break;
        }
      for(int i=0;i<100;i++)
        if(in[i])
         strcat(result,in[i]);
      for(int i=0;i<strlen(result)-1;i++)
      {
      if(result[i]=='W')
        {
        hua[0][j]+=1;
		hua[1][z]+=1;
        }      
      if(result[i]=='L')
        {
        dui[0][j]+=1;
		dui[1][z]+=1;
        }
      if((hua[0][j]>=11||dui[0][j]>=11)&&(hua[0][j]-dui[0][j]>=2||dui[0][j]-hua[0][j]>=2))
        j++;
	  if((hua[1][z]>=21||dui[1][z]>=21)&&(hua[1][z]-dui[1][z]>=2||dui[1][z]-hua[1][z]>=2))
        z++;
      if(result[i]=='E')
        break;
      }
      for(int i=0;i<=j;i++)
        cout<<hua[0][i]<<':'<<dui[0][i]<<endl;
      cout<<endl;
      for(int i=0;i<=z;i++)
        cout<<hua[1][i]<<':'<<dui[1][i]<<endl;
	  return 0;
}
