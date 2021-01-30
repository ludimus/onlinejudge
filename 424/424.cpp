#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int sum[111];
int iline[111];
int carry;


void filliline(string line)
{
    int i,l,j;

    l=line.size();
    j=l;
    for(i=0;i<111;i++)
    iline[i]=0;
    for(i=110;i>(110-l);i--){
      iline[i]=line[j-1]-48;
      j--;
    }

}



int main()
{

    int i,s;
    string line;

    freopen("424.in","r",stdin);
    for (i=0;i<111;i++)
     sum[i]=0;

    cin>>line;

    while(line!="0")
    {
        filliline(line);
        carry=0;
        for(i=110;i>=0;i--){

         sum[i]+=iline[i]+carry;
         if (sum[i]>9)carry=sum[i]/10;else carry=0;
         sum[i]%=10;
        }

        cin>>line;

    }
     s=0;
     while(sum[s]==0)s++;
     for(i=s;i<111;i++)
     cout<<sum[i];
     cout<<endl;


}
