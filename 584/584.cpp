#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
    char L[80];
    int T[25];
    int fac[25];
    int score,i,t,vt;

    freopen("584.in","r",stdin);
    cin.getline(L,80);
    while(strcmp(L,"Game Over"))
    {
        score=0;
        t=0;
        vt=0;
        for(i=0;i<25;i++){
          fac[i]=1;
          T[i]=0;
        }
        for(i=0;i<strlen(L);i++)
        {
            if(L[i]=='X'){
                vt+=2;
                T[t]=10;
                score+=(10*fac[t]);
                if(vt<20)fac[t+1]++;
                if(vt<19)fac[t+2]++;
                t++;

            }
            if(L[i]=='/'){
                vt++;
                T[t]=10-T[t-1];
                score+=(T[t])*fac[t];
                if(vt<20)fac[t+1]++;
                t++;

                }
            if((L[i]>=48)&&(L[i]<=57)){
                T[t]=L[i]-48;
                score+=T[t]*fac[t];
                t++;
                vt++;
                }

         // if(L[i]!=' ')cout<<score<<" "<<t<<" "<<vt<<endl;
        }
        cout<<score<<endl;
        cin.getline(L,80);

    }
    return 0;
}
