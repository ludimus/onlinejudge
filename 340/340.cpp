#include <iostream>
#include <cstdio>

using namespace std;

int secret[1000];
//int guesses[1000];
int scolors[10];
int gcolors[10];

int main()
{
int i,j,n,blacks,whites,gamenum,size;

freopen("340.in","r",stdin);
cin>>size;
gamenum=1;

while(size>0)
{

   for(i=0;i<10;i++)
   scolors[i]=0;


   cout<<"Game "<<gamenum++<<":"<<endl;
   for(i=0;i<size;i++)
   {
       cin>>n;
       secret[i]=n;
       scolors[n]++;
   }

   n=10;
   while(n>0)
   {
    blacks=0;
    whites=0;

    for(i=0;i<10;i++)
     gcolors[i]=0;

     for(i=0;i<size;i++){
      cin>>n;
      if(secret[i]==n)blacks++;
      gcolors[n]++;
     }


   for(i=0;i<10;i++)
      if(scolors[i]!=0){
          if (gcolors[i]<scolors[i])whites+=gcolors[i];else whites+=scolors[i];
         }
   //cout<<whites<<" "<<blacks<<endl;
   whites-=blacks;
   if(n>0)cout<<"    ("<<blacks<<","<<whites<<")"<<endl;
   }
   cin>>size;
}




return 0;
}
