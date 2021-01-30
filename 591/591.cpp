#include <iostream>

using namespace std;

int main()
{
 int ns,tot,i,avg,moves,set;
 int S[100];
 
 freopen("591.in","r",stdin);
 cin>>ns;
 set=0;
 while(ns!=0)
 {
  set++;
  moves=0;
  tot=0;
  for(i=0;i<ns;i++)
  {
   cin>>S[i];
   tot+=S[i];
  }
  avg=tot/ns;
  for(i=0;i<ns;i++)
   if(S[i]>avg)moves+=(S[i]-avg);
  cout<<"Set #"<<set<<endl;
  cout<<"The minimum number of moves is "<<moves<<"."<<endl<<endl;                              
 cin>>ns;
}
 
 
 return 0;   
}
