#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
    if((a<60)&&(b<60))
      cout<<"0";
    if((a<60)&&(b>60))
	  cout<<"1";
	if((a>60)&&(b<60))
	  cout<<"1";
	if((a>60)&&(b>60))
	  cout<<"0";  
	return 0;
}
