#include<bits/stdc++.h>
using namespace std;
int MAX=-1;
char s[233],t[233];
int main()
{
    cin>>s>>t;
    int l = strlen(s);
    int r = strlen(t);
    int k = min(l,r);
    for(int i=0;i<k;i++)
	{
        int counter=1;
        int tot=0;
        for(int j=r-i-1;j<r;j++)
		{
            if(s[tot++]!=t[j]) 
			{
                counter=0;
                break;
            }
        }
        if(counter) 
		  MAX=max(MAX,tot);
    }
    for(int i=0;i<k;i++)
	{
        int counter=1;
        int tot=0;
        for(int j=l-i-1;j<l;j++)
		{
            if(t[tot++]!=s[j]) 
			{
                counter=0;
                break;
            }
        }
        if(counter) 
		  MAX=max(MAX,tot);
    }
    cout<<MAX;
    return 0;
}
