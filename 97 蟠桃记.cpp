#include<bits/stdc++.h>
using namespace std;
int peach(int);
int main()
{
	int day;
	while(scanf("%d",&day)!=EOF)
    {
    	printf("%d\n",peach(day));
	}
	return 0;
}
int peach(int day)
{
	int n=1,sum=1;
	for(n=1;n<day;n++)
	  {
	  	sum+=1;
	  	sum*=2;
	  }
	return sum;
}
