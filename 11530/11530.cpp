#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int T[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

int main()
{
char S[101];

int tot,i,c=0,nc;
cin>>nc;
cin.getline(S,101); //get eoln

 while(nc--)
  {
	  cin.getline(S,101);
	  c++;
      tot=0;
      for(i=0;i<strlen(S);i++)
       if(S[i]==' ') tot++;
       else tot+=T[S[i]-97];
       
      
      cout<<"Case #"<<c<<": "<<tot<<endl;
      
  }  
    
return 0;
}
