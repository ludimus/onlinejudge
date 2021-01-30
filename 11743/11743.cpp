#include <iostream>
#include <cstdio>

using namespace std;

int cardnum[16];
int doubles[8];



int main()
{
    int ncards,i,j;
    int sum1,sum2;
    char line [100];

 //   freopen("11743.in","r",stdin);
    gets(line);
    sscanf(line,"%d",&ncards);
    while(ncards--)
    {
        gets(line);
        j=0;
        for(i=0;j<16;i++)
         if((line[i]>='0')&&(line[i]<='9'))
            cardnum[j++]=line[i]-48;

        sum1=0;
        for(i=0;i<8;i++){
         doubles[i]=cardnum[i*2]*2;
         sum1+=doubles[i]/10 +doubles[i]%10;
        }

        sum2=0;
        for(i=0;i<8;i++)
         sum2+=cardnum[(i*2)+1];
       // cout<<sum1<<" "<<sum2<<endl;
        if(((sum1+sum2)%10)==0)cout<<"Valid"<<endl;else cout<<"Invalid"<<endl;


    }

    return 0;
}
