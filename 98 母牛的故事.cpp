#include<bits/stdc++.h>
using namespace std;
int cow(int);
int n,sum;
int main()
{
	int year;
	while(scanf("%d",&year)!=EOF)
    {
    	if(year==0)
    	  return 0;
    	else
		printf("%d\n",cow(year));
	}
	return 0;
}
int cow(int year)
{
    if(year<=4&&year>0)
      return year;
    else
	{
	   return (cow(year-1)+cow(year-3));
    }
}
