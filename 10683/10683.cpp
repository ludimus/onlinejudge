#include <iostream>


using namespace std;


int oldtime,t,i,p;
double newtime,factor;
int oh,om,os,occ;

int main()
{

//freopen("10683.in","r",stdin);
factor=100000000.0/86400000.0;

 while(cin>>oldtime)
 {
   oh=oldtime/1000000;
   oldtime=oldtime-oh*1000000;
   
   om=oldtime/10000;
   oldtime=oldtime-om*10000;
   
   os=oldtime/100;
   oldtime=oldtime-os*100;
   
   
   occ=oldtime;
      
   newtime=((oh*360000)+(om*6000)+(os*100)+occ)*factor;
  
   t=1000000;
   for(i=0;i<7;i++){
      p=(int)(newtime/t);
      newtime-=p*t;
      t/=10;
      cout<<p;
      }
    cout<<endl;
                   
              
 
 }                  
                     
    
    
 return 0;   
}
