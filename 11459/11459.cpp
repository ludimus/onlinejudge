#include <iostream>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

map<int,int> B;
vector<int> P;


int main()
{
    int ngames,nplayers,nladders,nrolls;
    int i,a,b,player,dice;
    bool havewinner;

    freopen("11459.in","r",stdin);
    cin>>ngames;
    while(ngames--)
    {
        B.clear();
        P.clear();
        cin>>nplayers>>nladders>>nrolls;
        for(i=1;i<=100;i++)B[i]=i;
        for(i=0;i<nplayers;i++)P.push_back(1);
        while(nladders--)
        {
            cin>>a>>b;
            B[a]=b;
        }
        player=0;
        havewinner=false;
        for(i=0;i<nrolls;i++)
        {
            cin>>dice;
            if(!havewinner)
            {
                P[player]=B[P[player]+dice];
                if(P[player]>=100) {P[player]=100;havewinner=true;}
                player=(player+1)%nplayers;
            }

        }
        for(i=0;i<nplayers;i++)
         cout<<"Position of player "<<i+1<<" is "<<P[i]<<"."<<endl;
    }

    return 0;
}
