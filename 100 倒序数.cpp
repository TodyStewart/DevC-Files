#include<bits/stdc++.h>
using namespace std;
void backout(int a)
{
    cout<<a%10;
    if(a>=10)
	backout(a/10);
}
int main()
{
	int a;
	cin>>a;
	backout(a);
	return 0;
}

