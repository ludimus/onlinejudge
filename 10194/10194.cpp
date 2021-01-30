#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>


using namespace std;

struct team{
       string name;
       string lname;
       int points;
       int ngames;
       int nwins;
       int nlosses;
       int nties;
       int gd;
       int gs;
       int ga;
};


vector<team> poule;
int nt;

bool sortpoints(team a, team b){return (a.points>b.points);}
bool sortwins(team a, team b){return (a.nwins>b.nwins);}
bool sortgd(team a, team b){return (a.gd>b.gd);}
bool sortgs(team a, team b){return (a.gs>b.gs);}
bool sortngames(team a, team b){return (a.ngames<b.ngames);}
bool sortname(team a, team b){return (a.lname<b.lname);}





int str2int(string s)
{
    int i;
    int n=0;

    for(i=0;i<s.size();i++){
          n*=10;
          n+=s[i]-48;
          }
    return n;
}


void processgame(string gamedata)
{
string teama,teamb;
string goalsa,goalsb;

int h1,h2,at;
int ga,gb;
int i;


h1=gamedata.find_first_of("#");
at=gamedata.find_first_of("@");
h2=gamedata.find_last_of("#");

teama=gamedata.substr(0,h1);
teamb=gamedata.substr(h2+1,gamedata.size()-h2);
goalsa=gamedata.substr(h1+1,at-h1-1);
goalsb=gamedata.substr(at+1,h2-at-1);
ga=str2int(goalsa);
gb=str2int(goalsb);

//cout<< teama<<" vs "<<teamb<< " "<<ga<<":"<<gb<<endl;


for(i=0;i<nt;i++)
if(poule[i].name==teama)
{
  if(ga>gb){poule[i].points+=3;poule[i].nwins++;}
  if(ga==gb){poule[i].points++;poule[i].nties++;}
  if(ga<gb) {poule[i].nlosses++;}
  poule[i].ngames++;
  poule[i].gs+=ga;
  poule[i].ga+=gb;
  poule[i].gd=poule[i].gs - poule[i].ga;
}

for(i=0;i<nt;i++)
if(poule[i].name==teamb)
{
  if(gb>ga){poule[i].points+=3;poule[i].nwins++;}
  if(gb==ga){poule[i].points++;poule[i].nties++;}
  if(gb<ga) {poule[i].nlosses++;}
  poule[i].ngames++;
  poule[i].gs+=gb;
  poule[i].ga+=ga;
  poule[i].gd=poule[i].gs-poule[i].ga;
};




}

void add_team(string tname)
{
       team T;
       int i;

       T.lname=tname;
       for(i=0;i<tname.size();i++)
          if((T.lname[i]>64)&&(T.lname[i]<91))T.lname[i]+=32;

       T.name=tname;

       T.points=0;
       T.ngames=0;
       T.nwins=0;
       T.nlosses=0;
       T.nties=0;
       T.gd=0;
       T.gs=0;
       T.ga=0;
       poule.push_back(T);
}



void printpoule(int nt)
{
     int i;
     for(i=0;i<nt;i++)
     {
      cout<<i+1<<") ";
      cout<<poule[i].name<<" ";
      cout<<poule[i].points<<"p, ";
      cout<<poule[i].ngames<<"g ";
      cout<<"("<<poule[i].nwins<<"-";
      cout<<poule[i].nties<<"-";
      cout<<poule[i].nlosses<<"), ";
      cout<<poule[i].gd<<"gd ";
      cout<<"("<<poule[i].gs<<"-";
      cout<<poule[i].ga<<")";

      cout<<endl;
      }
}



int main()
{
  int nc,ng,teamc;
  char tournament_name[101];
  char team_name[100];
  char gameline[200];
  char temp[10];
  string gamedata;
  team T;

  freopen("10194.in","r",stdin);
  cin>>nc;
  cin.getline(temp,10);//eoln
  while(nc--)
  {
   poule.erase(poule.begin(),poule.end());

   cin.getline(tournament_name,101);
   cout<< tournament_name<<endl;
   cin>>nt;
   cin.getline(temp,10);//eoln
   teamc=nt;
   while(teamc--){

     cin.getline(team_name,100);
     add_team(team_name);
     }

   cin>>ng;
   cin.getline(temp,101);//eoln
   while(ng--)
   {
     cin.getline(gameline,200);
   //  cout<<gamedata<<endl;
     gamedata=gameline;
     processgame(gamedata);
    }
   //printpoule(nt);
   stable_sort(poule.begin(),poule.end(),sortname);
   stable_sort(poule.begin(),poule.end(),sortngames);
   stable_sort(poule.begin(),poule.end(),sortgs);
   stable_sort(poule.begin(),poule.end(),sortgd);
   stable_sort(poule.begin(),poule.end(),sortwins);
   stable_sort(poule.begin(),poule.end(),sortpoints);

   printpoule(nt);
   if(nc>0)cout<<endl;
   }


 return 0;
}
