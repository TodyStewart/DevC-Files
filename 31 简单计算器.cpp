#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    char a;
    cin>>x>>y>>a;
    switch(a)
    {
    	case '+': z=x+y;
		          cout<<z;
				  break;
    	case '-': z=x-y;
    	          cout<<z;
		          break;
    	case '*': z=x*y;
    	          cout<<z;
		          break;
    	case '/': if(y==0)
    	          cout<<"Divided by zero!";
    	        if(y!=0)
				{
				z=x/y;
				cout<<z;
		     	}
				break;
    	default: cout<<"Invalid operator!";       
    }
    
	return 0;
}
