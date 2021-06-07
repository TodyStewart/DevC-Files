#include<bits/stdc++.h>
using namespace std;
int m,n,deadline,passnum,m0;
struct interviewee{
	int num;
	int point;
};
interviewee viewee[5000];
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;++i)
	{
		cin>>viewee[i].num>>viewee[i].point;
	}
	for(int i=0;i<n;++i)
	  for(int j=0;j<n;++j)
	  {
	    if(viewee[j].point<viewee[j+1].point) swap(viewee[j],viewee[j+1]);
	    if(viewee[j].point==viewee[j+1].point)
	      if(viewee[j].num>viewee[j+1].num) swap(viewee[j],viewee[j+1]);
    }
	m0=(double)1.5*m;
    m=(int)floor(m0);
	deadline=viewee[m-1].point;
	for(int i=0;i<n;i++)
	  if(viewee[i].point>=deadline)
	    ++passnum;
	cout<<deadline<<' '<<passnum<<endl;
	for(int i=0;i<passnum;i++)
	  cout<<viewee[i].num<<' '<<viewee[i].point<<endl;
	return 0;
}
