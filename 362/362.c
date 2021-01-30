#include <stdio.h>


int main(){

int buf[5];
float buftot;
int size,timer;
float trx_bytes,sizef;
int dataset=1;
float rt;

  scanf("%d\n",&size);
  while (size>0){
        printf("\nOutput for data set %d, %d bytes:\n",dataset++,size);
        sizef=size;
        timer=0;
        trx_bytes=0;
        while(trx_bytes<size){
               scanf("%d",&buf[timer%5]);        
               trx_bytes+=buf[timer%5];
               timer++;
               if((timer%5)==0) {
                         buftot=buf[0]+buf[1]+buf[2]+buf[3]+buf[4];
                         if (buftot==0) 
                             printf("    Time remaining: stalled\n");
                         else { rt=  ((size-trx_bytes) / (buftot/5)) ;     
                                printf("    Time remaining: %d  %d  %d seconds\n",(sizef-trx_bytes) , (buftot/5));
                              } 
                    }
                if (trx_bytes==size) printf("Total time: %d seconds\n",timer);
         }
    scanf("%d\n",&size);
  }
                                           





return(0);
}
