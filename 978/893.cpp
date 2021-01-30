#include <iostream>
#include <set>
#include <stack>
#include <cstdio>

using namespace std;

//lemmings in army
multiset<int> SG;
multiset<int> SB;

multiset<int>::iterator itg;
multiset<int>::iterator itb;

 //lemmings on battlefield
stack<int> BFG;
stack<int> BFB;


void printbluearmy()
{
     if(SB.size()>0)
     {
       itb=SB.end();
       itb--;
       while(itb!=SB.begin())
        { cout<<*itb<<endl;
          itb--;
        }
       cout<<*itb<<endl;
     }
}


void printgreenarmy()
{

    if(SG.size()>0)
     {
       itg=SG.end();
       itg--;
       while(itg!=SG.begin())
        { cout<<*itg<<endl;
          itg--;
        }
       cout<<*itg<<endl;
     }
}


int min(int a, int b, int c){
  
  int ret=0;
  
  if((a<=b)&&(a<=c)) ret=a;
  if((b<=a)&&(b<=c)) ret=b;
  if((c<=b)&&(c<=a)) ret=c;
  
return ret;
}


int main()
{
  int nc,ls,i;
  int numbattles;
  int roundnum=0;
  int NBA,NG,NB;

    freopen("978.in","r",stdin);
    cin>>nc;
    while(nc--)
    {
     SG.clear();
     SB.clear();
     while(!BFG.empty())BFG.pop();
     while(!BFB.empty())BFB.pop();
     cin>>NBA>>NG>>NB;
     for(i=0;i<NG;i++){ cin>>ls; SG.insert(ls);}
     for(i=0;i<NB;i++){ cin>>ls; SB.insert(ls);}

     while((SG.size() !=0) && (SB.size() !=0))
     {

         numbattles=min(NBA,SG.size(),SB.size());
         printgreenarmy();
         printbluearmy();
         cout<<"Round :"<<roundnum++<<" numbattles: "<<numbattles<<endl;
         itg=SG.end();
         itb=SB.end();
         for(i=0;i<numbattles;i++)
         {
           itg--;
           itb--;
           BFG.push(*itg-*itb);
           BFB.push(*itb-*itg);
           cout<<*itg<<" vs "<<*itb<<endl;
           SG.erase(itg);
           SB.erase(itb);
         }
         //return green lemmings to army;
         while(!BFG.empty())
         {
            if(BFG.top()>0) SG.insert(BFG.top());
            BFG.pop();
         }
         //return blue lemmings to army;
         while(!BFB.empty())
         {
            if(BFB.top()>0) SB.insert(BFB.top());
            BFB.pop();
         }

     }
     if((SB.size()==0)&&(SG.size()==0)) cout<<"green and blue died"<<endl;
     else if(SB.size()==0){cout<<"green wins"<<endl;printgreenarmy();}
          else{cout<<"blue wins"<<endl;printbluearmy();}
     if(nc>0)  cout<<endl;
  }
return 0;
}
