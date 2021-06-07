#include<bits/stdc++.h>
using namespace std;
string names[12];
string nametemp[12];
struct gifter{
	string name;
	int money;
	int people;
	int given;
	int moneyf;
	int moneycost;
};
gifter a[11];
int p;
int grande;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>names[i];
	for(int i=0;i<n;i++)
	  a[i].name=names[i];
	for(int i=0;i<n;i++)
	  {
	  cin>>nametemp[i];
	  for(p=0;p<n;p++)
	  {
	    if(names[p]==nametemp[i])
	    {
	     cin>>a[p].moneyf>>a[p].people;
	     if(a[p].people)
	     a[p].money-=a[p].moneyf-(a[p].moneyf%a[p].people);
	     break;
	    }  
       }
	  for(int j=0;j<a[p].people;j++)
	    {
		cin>>nametemp[j];
		for(int k=0;k<n;k++)
		{
			if(nametemp[j]==names[k])
			{
				a[k].money+=a[p].moneyf/a[p].people;
				break;
			}
		}
	    }
      }
    for(int i=0;i<n;i++)
      cout<<a[i].name<<" "<<a[i].money<<endl; 
	return 0;  
}
