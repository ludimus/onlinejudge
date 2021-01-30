#include <stdio.h>


int main(){

int R[100][5];
int n,t,i,j;

for(i=0;i<100;i++)
    for(j=0;j<5;j++) 
        R[i][j]=0;

for(n=0;n<100;n++){
       t=n;
       while(t>0){
           switch(t){
               case 100: R[n][4]++;t=t-100;break;
               case 90:99: R[n][4]++;R[n][2]++;t=t-90;break;
               case 50 89: R[n][3]++;t=t-50;break;
               case 40 49: R[n][3]++;R[n][2]++;t=t-40;break;
               case 10 39: R[n][2]++;t=t-10;break;
               case 9: R[n][1]++;R[n][1]++;t=t-9;break;
               case 5-8: R[n][1]++;t=t-5;break;
               case 4: R[n][0]++;R[n][1]++;t=t-4;break;
               case 1: R[n][0]++;t=t-1;break;
               default : break;
               }                
               }


}                                      
  for(i=0;i<100;i++)
      printf("%d\t: %d %d %d %d %d\n",R[i][0],R[i][1],R[i][2],R[i][3],R[i][4]);                  

return(0);
}
