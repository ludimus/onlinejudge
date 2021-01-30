#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int W[101];
int L[101];

int main()
{
    int n,k,ng,i,p1,p2,c;
    string s1,s2;
    double winrate;

    c=0;
    freopen("10903.in","r",stdin);
    cin>>n;
    while(n>0)
    {
        c++;
        if(c>1)cout<<endl;

        cin>>k;
        ng=n*k*(n-1)/2;
       // cout<<"ng"<<ng<<endl;

        for(i=0;i<101;i++)
        {
            W[i]=0;
            L[i]=0;
        }

        for(i=0;i<ng;i++)
        {
            cin>>p1>>s1>>p2>>s2;
        //    cout<<p1<<s1<<p2<<s2<<endl;

            if((s1=="rock")&&(s2=="scissors")){W[p1]++;L[p2]++;}
            if((s1=="scissors")&&(s2=="paper")){W[p1]++;L[p2]++;}
            if((s1=="paper")&&(s2=="rock")){W[p1]++;L[p2]++;}

            if((s2=="rock")&&(s1=="scissors")){W[p2]++;L[p1]++;}
            if((s2=="scissors")&&(s1=="paper")){W[p2]++;L[p1]++;}
            if((s2=="paper")&&(s1=="rock")){W[p2]++;L[p1]++;}

        }
        for(i=1;i<n+1;i++){
            if(W[i]+L[i]==0)cout<<"-"<<endl;
            else  {
                winrate=(double)W[i]/(double)(W[i]+L[i]);
                printf("%.3f",winrate);
                cout<<endl;
            }
        }

        cin>>n;
        //n=0;
    }
    return 0;
}
