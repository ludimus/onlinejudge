#include <stdio.h>

typedef struct _slot{
  int l;
  int low;
  int start_time;
}slot;

int H[32767];
slot slist[32767];
int cl;
int sn;
int test=1;

void init(){
    
    int i;
    
    for (i=0;i<32767;i++){
        H[i]=0;
        slist[i].l=0;
        slist[i].low=32767;
        slist[i].start_time=0;
    }
    sn=0;
    cl=-1;    
}    

int findstarttime(int k){
    
    int i=0;
    while(H[i]>k)i++;
    return(i);
}

void printstatus(){
    
    int i;
    printf("cl: %d\n",cl);
    for(i=0;i<sn;i++)
        printf("slot %d\n l:%d low:%d st:%d\n\n",i,slist[i].l,slist[i].low,slist[i].start_time);
    printf("\nH: ");
    for(i=0;i<10;i++)
    printf("%d\t",H[i]);    
}
    

int main(){

int k,i,ll;

init();   

while (scanf("%d",&k)!=EOF){
    if (k<cl){
          for(i=0;i<sn;i++)
              if (slist[i].low>k){
                   slist[i].low=k;
                   if(k>H[slist[i].l+slist[i].start_time])H[slist[i].l+slist[i].start_time]=k;
                   slist[i].l++;
              }
          cl=k;
    }     
    if (k>cl){
              slist[sn].start_time=findstarttime(k);
              slist[sn].l++;
              slist[sn].low=k;
              H[slist[sn].start_time]=k; 
              cl=k;
              sn++;
              }    
                       
    if((k==-1)&&(sn==0))exit(0);
    
    if((k==-1)&&(sn>0))
      {
          ll=0;
           for (i=0;i<sn;i++)
             if(slist[i].l+slist[i].start_time>ll)ll=slist[i].l+slist[i].start_time;
          printf("Test #%d:\n  maximum possible interceptions: %d\n\n",test++,ll-1);
          init();
      }        
    


}
}

        
