#include <stdio.h>



int main(){
    
    int in[9];
    int i,f;
    
    while(scanf("%d %d %d %d %d %d %d %d %d",&in[8],&in[7],&in[6],&in[5],&in[4],&in[3],&in[2],&in[1],&in[0])!=EOF){
        f=0;
        for (i=8;i>0;i--){
            if(in[i]!=0) f++;
            if((in[i]<=-1)&& (f==1)) printf("-",in[i]*-1);
            if((in[i]<=-1)&& (f!=1)) printf(" - ",in[i]*-1);
            if((in[i]>=1)&& (f!=1)) printf(" + ",in[i]);

            if(in[i]<0) in[i]*=-1;
            
            if(in[i]>1) printf("%d",in[i]);
            if(in[i]>0) printf("x");
            if((i>1)&& (in[i]>0)) printf("^%d",i);
            
           
        }    
            
            if(f==0) printf("%d",in[0]);
            else {
                 if(in[0]<0)printf(" - %d",in[0]*-1);
                 if(in[0]>0)printf(" + %d",in[0]);
            }    
            printf("\n");  
        }          
    
    
    
 
       
}    
