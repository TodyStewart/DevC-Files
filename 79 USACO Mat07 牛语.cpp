#include<bits/stdc++.h>
using namespace std;
char cow[100][41];
int main()
{
      int n;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
        scanf("%s",cow[i]);
      for(int i=0;i<n;i++)
      {
      	for(int j=0;j<strlen(cow[i]);j++)
        {
        	if(cow[i][0]=='a'||cow[i][0]=='e'||cow[i][0]=='i'||cow[i][0]=='o'||cow[i][0]=='u')
        	  {
        	  printf("%scow\n",cow[i]);
        	  break;
              }
        	else
        	{
        		cow[i][strlen(cow[i])]=cow[i][0];
        		for(int n=0;n<strlen(cow[i]);n++)
				  {
				  cow[i][n]=cow[i][n+1];
				  cow[i][strlen(cow[i])]=NULL;
			      }
			    printf("%s",cow[i]);
			    printf("ow\n");
        		break;
        	}
        }
      }
        
	  return 0;
}
