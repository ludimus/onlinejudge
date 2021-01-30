#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int np,nh,budget,nw,nb,hcost,totalcosts;
  int i,j,k;
  bool test;

  freopen("11559.in","r",stdin);
  while(cin>>np)
  {

   cin>>budget>>nh>>nw;
  // cout<<budget<<nh<<nw<<endl;

   totalcosts=budget+1;
   //cout<<nh<<endl;
   while(nh>0)
   {
    cin>>hcost;
   // cout<<nh<<" "<<hcost<<endl;
    k=nw;
    while(k>0)
    {
     cin>>nb;
    // cout<<nb<<endl;
     if(nb>=np)
       if((np*hcost)<totalcosts)totalcosts=np*hcost;
    k--;
    }
  nh--;
  }
 if(totalcosts<budget) cout<<totalcosts<<endl;
 else cout<< "stay home"<<endl;
 }


 return 0;
}
