
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

char sol[1000000];
int r[1000001];

void initsol(int l){
int i;

for(i=1;i<=l;i++) sol[i]=0x00;
}
        
 

void printsol(int l)
{
    int i;
    for(i=1;i<=l/2;i++)
    if (sol[i]==0x00) {printf("%d\n",i);i=l/2+1;}
    if (i==(l/2+1)) printf("Better estimate needed\n");
}

void fillresults(){


int i ,b;
r[1]=0;
r[2]=1;
r[3]=1;
r[4]=0;
r[5]=0;
r[6]=3;
r[7]=4;
r[8]=3;
r[9]=0;
r[10]=5;
r[11]=9;
r[12]=0;
r[13]=2;
r[14]=3;
r[15]=3;

for (i=16;i<1000001;i++){
     b=15+r[i-1];
     if (b<i) r[i]=b; else r[i]=b-i;
 }
}

                
main()
{


int i,n,a;

#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif


         
int t,l,h;
fillresults();

 scanf("%d %d",&l,&h);
 while(h>0)
 {
     if (l>h){t=h;h=l;l=t;}
     initsol(l);
     for (a=l;a<=h;a++){
          
       sol[r[a]]=0x01;
       sol[a-r[a]]=0x01;
   
     }
    printsol(l);
    scanf("%d %d",&l,&h);
 }   


}        
   

