#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

struct player{
    int name;
    int nsolved;
    int penalty[10];
    bool psolved[10];
    int time;
    bool submitted;
};

vector<player> Scoreboard;

bool sortpoints(player a,player b){return(a.nsolved>b.nsolved);}
bool sorttime(player a,player b){return(a.time<b.time);}
bool sortname(player a,player b){return(a.name<b.name);}




void clearfield()
{

    int i,j;
    player P;
    Scoreboard.erase(Scoreboard.begin(),Scoreboard.end());

    for(i=0;i<101;i++)
    {
        P.name=i;
        P.time=0;
        P.nsolved=0;
        for(j=0;j<10;j++)P.penalty[j]=0;
        for(j=0;j<10;j++)P.psolved[j]=false;
        P.submitted=false;
        Scoreboard.push_back(P);
    }
}


void printresult()
{

    int i;
    for(i=0;i<101;i++)
      if(Scoreboard[i].submitted)
        cout<<Scoreboard[i].name<<" "<<Scoreboard[i].nsolved<<" "<< Scoreboard[i].time<<endl;

}

int main()
{
    char line[100];

    int name,pid,time;
    char result;
    int nc,len;

    freopen("10258.in","r",stdin);
    // get number of cases
    clearfield();

    cin.getline(line,100);
    sscanf(line,"%d",&nc);
    cin.getline(line,100);

    //cout<<nc<<endl;
    while(nc--)
    {

      cin.getline(line,100);
      len=strlen(line);

      while(len>0)
      {
       //  cout<<"len:"<<len<<" "<<line<<endl;
         sscanf(line,"%d %d %d %c",&name,&pid,&time, &result);
         Scoreboard[name].submitted=true;
         if ((result=='I')&&(Scoreboard[name].psolved[pid]==false))Scoreboard[name].penalty[pid]+=20;
         if((result=='C')&&(Scoreboard[name].psolved[pid]==false))
         {
             Scoreboard[name].nsolved++;
             Scoreboard[name].psolved[pid]=true;
             Scoreboard[name].time+=time+Scoreboard[name].penalty[pid];

         }

        // printresult();
         cin.getline(line,100);
         len=strlen(line);
      }
      if(len==0)
      {
        stable_sort(Scoreboard.begin(), Scoreboard.end(),sortname);
        stable_sort(Scoreboard.begin(), Scoreboard.end(),sorttime);
        stable_sort(Scoreboard.begin(), Scoreboard.end(),sortpoints);
        printresult();
        if(nc>0)cout<<endl;
        clearfield();
      }




    }

    return 0;
}
