#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

struct card{
       char v;
       char s;
};

card deck[52];

stack<card> S[52];

int cardsdealt;
int offset;
int firstfree=0;




bool readdeck()
{

    char line[100];
    int l,i;
    bool ret=true;

    cin.getline(line,100);

    if(line[0]=='#')ret=false;
    else
     {
      l=0;
      for(i=0;i<26;i++)
        {
            deck[i].v=line[l];
            deck[i].s=line[l+1];
            l+=3;
        }

      l=0;
      cin.getline(line,100);
      for(i=26;i<52;i++)
        {
            deck[i].v=line[l];
            deck[i].s=line[l+1];
            l+=3;
        }
     }
 return ret;
}



void printstacks(){

     int i;


     cout<<firstfree;
     if(firstfree>1)cout<<" piles remaining:";
     else cout<<" pile remaining:";

     for(i=0;i<firstfree;i++)
      printf(" %d",S[i].size());
      cout<<endl;
}



int searchformatch(){

    int i,pos;
    card c1,c2;
    int ret=0;

    if(firstfree>1)
    {
     for(i=1;i<firstfree;i++){
       c1=S[i].top();
       c2=S[i-1].top();
    //   cout<<"1comparing :"<<c1<<" "<<c2<<endl;
       if ((c1.v==c2.v) || (c1.s==c2.s)) { ret=i;i=firstfree+1;offset=1;}

     }
    }

    if(firstfree>3)
    {
      for(i=3;i<firstfree;i++){
        c1=S[i].top();
        c2=S[i-3].top();
     //   cout<<"3comparing :"<<c1<<" "<<c2<<endl;
        if ((c1.v==c2.v) || (c1.s==c2.s))
          {
            if((ret==0) || (i<=ret)) {
                        ret=i;
                        i=firstfree+1;
                        offset=3;
            }
        }

      }
    }


return ret;
}


void clearfield()
{

     int i;


     cardsdealt=0;
     for(i=0;i<52;i++)
      while(!S[i].empty()) S[i].pop();
      firstfree=0;
}



void make_match(int match){

     int i;
     int pos;



     S[match-offset].push(S[match].top());
     S[match].pop();

     if(S[match].empty()){
       for(i=match;i<firstfree;i++)
         S[i]=S[i+1];
       firstfree--;
     }
}



int main()
{


 int matchstack=0;
 string cc;
 char a;

 freopen("127.ino","r",stdin);

 while(readdeck())
 {
   clearfield();
   while(cardsdealt<52)
   {
   // deal nextcard from deck

   S[firstfree++].push(deck[cardsdealt++]);
  // cout<<"card: "<<cc<<" dealt on stack "<<firstfree-1<<endl;
   matchstack=searchformatch();
   while (matchstack>0)
        {
    //     cout<<"matchstack:"<<matchstack<<" offset: "<<offset<<endl;
         make_match(matchstack);
         matchstack=searchformatch();
        }


   }//end current game
   printstacks();
 }
 return 0;
}
