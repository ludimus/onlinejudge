#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;


int getval(char c)
{
    int ret=0;
    if((c>96)&&(c<123))ret=c-96;
    if((c>64)&&(c<91))ret=c-64;
   // cout<<ret<<endl;
    return ret;
}


int main()
{
char man[27];
char wife[27];

int m,w;
int i;
int totm,totw;

while(cin.getline(man,27))
{
  m=0;
  w=0;
  
  cin.getline(wife,27);
  for(i=0;i<strlen(man);i++)
    m+=getval(man[i]);
  for(i=0;i<strlen(wife);i++)
    w+=getval(wife[i]);
  // cout<<m<<" "<<w<<endl;
  
  totm=0;                        
  while(m>0){
    //  cout<<m<<"-inm-  "<<totm<<endl;
      totm+=m%10;
      m/=10;
      if((m==0)&&(totm>9)){m=totm;totm=0;}
      }       
   
  
  totw=0;                         
  while(w>0){
      //       cout<<w<<"-inw- "<<totw<<endl;
      totw+=w%10;
      w/=10;
      if((w==0)&&(totw>9)){w=totw;totw=0;}
      }       
  
// cout<<totm<<"  "<<totw<<endl; 
 if(totw>totm)
   printf("%.2f",100*(double)totm/(double)totw);
 else
  printf("%.2f",100*(double)totw/(double)totm);
  cout<<" %"<<endl;   
}

  
return 0;
}        

