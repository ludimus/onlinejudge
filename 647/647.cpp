#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> throws;

struct player{
       char state;                              //i=inactive; a=active;h=hold;
       int pos;
       };

struct field{
       int jumpto;
       bool again;
       bool hold;
};

field B[101];   //board
player P[6];


int main()
{

  int n,nplayers,i,t;
  int cl1,cl2,pl;


 freopen("647.in","r",stdin);
  //read throws
  cin>>n;
  while(n!=0)
  {
    throws.push_back(n);
    cin>>n;
  }
  cin>>nplayers;

  while(nplayers!=0)
  {
    //init players
    for(i=0;i<6;i++)
    {
      if(i<nplayers)P[i].state='a';
      else P[i].state='i';
      P[i].pos=0;
    }

    //init board
    for(i=1;i<101;i++){
     B[i].jumpto=i;
     B[i].again=false;
     B[i].hold=false;
    }

    //read chute and ladders
    cin>>cl1>>cl2;
    while(cl1!=0 || cl2!=0)
    {
      B[cl1].jumpto=cl2;
   //   cout<<cl1<<" "<<cl2<<endl;
      cin>>cl1>>cl2;

    }
    //read special fields
    cin>>n;
    while(n!=0)
    {
     if(n<0){n*=-1;B[n].hold=true;}
     else if(n>0)B[n].again=true;
  //   cout<<"special field "<<n<<endl;
     cin>>n;
    }
    //playgame

    pl=0;
    for(t=0;t<throws.size();t++)
    {
    // cout<<"processing throw :"<<t<<"["<<throws[t]<<"]"<<endl;
     while(P[pl].state=='i'){pl++;pl%=6;}                          //skip inactiveplayers
     if (P[pl].state=='h'){P[pl].state='a';pl++;pl%=6;}            //player on hold,make active and skip to next player
     if(P[pl].state=='a')                                          // process activeplayer
     {
      if((P[pl].pos+throws[t])<=100)                               //ignorethrows>100;
         P[pl].pos=B[P[pl].pos+throws[t]].jumpto;
      //cout<<"moved player :"<<pl+1<<" to pos "<<P[pl].pos<<endl;
      if(P[pl].pos==100) {cout<<pl+1<<endl;t=throws.size();}
      if(B[P[pl].pos].hold) P[pl].state='h';                       // put player onhold on hold field;
      if(!B[P[pl].pos].again){pl++;pl%=6;}                         // skip to nextplayer if not throw again
     }
    }

    cin>>nplayers;
  }


return 0;
}
