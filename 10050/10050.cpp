#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    int nc,np,ndays,tothartals,i,p;
    bool hartal;
    int P[100];

  //  freopen("10050.in","r",stdin);
    cin>>nc;
    while(nc--)
    {
        tothartals=0;
        cin>>ndays;
        cin>>np;
        for(i=0;i<np;i++)
         cin>>P[i];
        for(i=1;i<=ndays;i++)
        {
        hartal=false;
          for(p=0;p<np;p++)
            if(i%P[p]==0){hartal=true;p=np;}
        if((hartal)&&((i%7)!=0)&&((i%7)!=6)) tothartals++;
        }
        cout<<tothartals<<endl;
    }

    return 0;
}
