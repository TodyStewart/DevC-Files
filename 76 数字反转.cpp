#include<bits/stdc++.h>
using namespace std;
char eky[26],dky[26],testout[100],testin[100],decryptor[100],delin[26],delout[26];
int main()
{
      int r=1,k=1;
	  scanf("%s",testout);
      scanf("%s",testin);
	  for(int m=0;m<strlen(testout);m++)
          	{
          		for(int n=0;n<strlen(testout);n++)
          		 {
          		  if(testout[m]==testout[n]&&m!=n)
          		    {
          		    	testout[max(m,n)]=NULL;
          		    }
          		if(testin[m]==testin[n]&&m!=n)
          	     	{
          		    testin[max(m,n)]==NULL;
          		    }
          	    }
          	}
		for(int i=0,j=0;i<strlen(testout)&&j<=25;i++,j++)
        {
            if(testout[i]!='a'&&testin[i]!='a'&&testout[i]&&testin[i])
			{
			  eky[j]=testout[i];
          	  dky[j]=testin[i];
          	  delin[j]=testin[i];
          	  delout[j]=testout[i];
            }
         
        }
      for(int j=0;j<=25;j++)
       {
        if(!delin[j]||!delout[j])
        {
        	r=0;
        	break;
        }
        else continue;
      }
     for(int i=0;i<=25;i++)
     {
     	if(k==0) break;
     	for(int j=0;j<=25;j++)
     	 {
     	  if(eky[i]==eky[j]&&i!=j)
     	  {
     	  	k=0;
     	  	r=0;
     	  	break;
     	  }
     	 if(dky[i]==dky[j]&&i!=j) 
     	 {
     	 	k=0;
     	 	r=0;
     	 	break;
     	 }
        }
     }
     scanf("%s",decryptor);
	 if(r==0)
       cout<<"Failed";
     else
     {
     for(int n=0;n<strlen(decryptor);n++)
	   for(int i=0;i<=25;i++)
	      if(decryptor[n]==eky[i])
             cout<<dky[i];
     }
	  return 0;
}
