#include <iostream>
#include <set>
#include <cstdio>
using namespace std;


set<int> CARD[12];


int main()
{
   int n,ngames,i,c;
   bool gotit=false;


  // freopen("10813.in","r",stdin);
   cin>>ngames;
   while(ngames--){
     for(i=0;i<12;i++)
       CARD[i].clear();
   for(i=0;i<24;i++)
   {
    cin>>n;
    if(i==0 || i==1 ||i==2 ||i==3 ||i==4 )CARD[0].insert(n);
    if(i==5 || i==6 ||i==7 ||i==8 ||i==9 )CARD[1].insert(n);
    if(i==10|| i==11||       i==12||i==13)CARD[2].insert(n);
    if(i==14|| i==15||i==16||i==17||i==18)CARD[3].insert(n);
    if(i==19|| i==20||i==21||i==22||i==23)CARD[4].insert(n);

    if(i==0 || i==5 ||i==10||i==14||i==19)CARD[5].insert(n);
    if(i==1 || i==6 ||i==11||i==15||i==20)CARD[6].insert(n);
    if(i==2 || i==7 ||       i==16||i==21)CARD[7].insert(n);
    if(i==3 || i==8 ||i==12||i==17||i==22)CARD[8].insert(n);
    if(i==4 || i==9 ||i==13||i==18||i==23)CARD[9].insert(n);

    if(i==0 || i==6 ||i==17||i==23 )CARD[10].insert(n);
    if(i==4 || i==8 ||i==15||i==19 )CARD[11].insert(n);
   }

   gotit=false;

   for(i=0;i<75;i++)
   {
       cin>>n;
       if(!gotit)
         for(c=0;c<12;c++)
         {
          CARD[c].erase(n);
          if((CARD[c].empty())&&(gotit==false))
          {
           cout<<"BINGO after "<<i+1<<" numbers announced"<<endl;
           gotit=true;
          }
        }
   }

   }



   return 0;
}
