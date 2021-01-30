#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

int main()
{
char S[32];
char h0,h1,sep1,m0,m1,sep2,s0,s1;
int l, newspeed;
int curtime,lasttime;
float distance;
float speedsec=0;

freopen("10281.in","r",stdin);

curtime=0;
speedsec=0.0;
distance=0.0;

while(cin.getline(S,32,'\n'))
{
  l=strlen(S);
  if(l>9){
	  
   sscanf(S,"%c%c%c%c%c%c%c%c %d", &h0,&h1,&sep1,&m0,&m1,&sep2,&s0,&s1,&newspeed);
   curtime=s1+(s0*10)+(m1*60)+(m0*600)+(h1*3600)+(h0*36000);
   distance+=(curtime-lasttime)*speedsec;
   speedsec=(float)(newspeed)*1000/3600;
   lasttime=curtime;
  }
  else{
   sscanf(S,"%c%c%c%c%c%c%c%c",&h0,&h1,&sep1,&m0,&m1,&sep2,&s0,&s1);
   curtime=s1+(s0*10)+(m1*60)+(m0*600)+(h1*3600)+(h0*36000);
   distance+=(curtime-lasttime)*speedsec;
   lasttime=curtime;
   cout<<h0<<h1<<sep1<<m0<<m1<<sep2<<s0<<s1<<" ";
   printf("%.2f km\n",distance/1000);
  }
  
}
 

return 0;
}

