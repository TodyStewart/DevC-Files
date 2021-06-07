#include<bits/stdc++.h>
using namespace std;
char encrypted[1000];
char decrypted[1000];
char key[1000];
int main()
{
      cin>>key;
      cin>>encrypted;
     for(int j=0;j<strlen(key);j++)
      	  if(key[j]<97)
      	  {
      	  	key[j]+=32;
      	  }
      for(int n=0,j=0;j<strlen(encrypted);j++)
      	  if(!key[j])
      	  {
      	  	key[j]=key[n];
      	  	n++;
      	  }
	  for(int i=0;i<strlen(encrypted);i++)
      {
      	
      	    decrypted[i]=encrypted[i]-key[i]+97;
      	    if(decrypted[i]<65)
      	      decrypted[i]+=26;
      	    if(decrypted[i]<97&&encrypted[i]>96)
      	      decrypted[i]+=26;
      }
      for(int i=0;i<strlen(encrypted);i++)
        cout<<decrypted[i];
	  return 0;
}
