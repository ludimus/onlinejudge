#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int ischar(unsigned char c){
    int r=0;
      if ((c>='a')&&(c<='z'))r=1;
      if ((c>='A')&&(c<='Z'))r=1;
return(r);
}


int main()
{
char S[10000];

//freopen("tst.txt","r",stdin);
int wc,inword,i;
;
 while(cin.getline(S,10000))
  {
	  //cout<<S<<endl;
	  wc=0;
      inword=0;
      for(i=0;i<strlen(S);i++)
      {
	   if((ischar(S[i])==1)&&(inword==0)){inword=1;wc++;}
       if((ischar(S[i])==0)&&(inword==1))inword=0;
      }
      cout<<wc<<endl;
      
  }  
    
return 0;
}

