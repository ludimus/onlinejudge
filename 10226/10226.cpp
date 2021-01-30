#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>


using namespace std;

map<string,int> L;
map<string,int>::iterator it;




int main(){


  int nc,sum=0;
  char treename[100];


  //freopen("10226.in2","r",stdin);
  L.clear();
  cin>>nc;
  gets(treename);//read eoln
  gets(treename);//read first empty line


  while(gets(treename)){
      //cout<<nc<<" "<<treename<<endl;
      if(strlen(treename)==0)
      {

       for(it=L.begin();it!=L.end();it++)
         {
          cout<<it->first<<" ";
          printf("%.4f\n",100*(float)it->second/(float)sum);
         }


         L.clear();
         sum=0;
         nc--;
         if(nc>0)cout<<endl;
      }
      else{
      // if(L.find(treename)==L.end()) L[treename]=1;
      //   else L[treename]++;
         L[treename]++;
      sum++;
      }


  }
       for(it=L.begin();it!=L.end();it++)
         {
          cout<<it->first<<" ";
          printf("%.4f\n",100*(float)it->second/(float)sum);
         }
  return 0;
}
