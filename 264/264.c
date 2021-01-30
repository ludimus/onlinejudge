#include <stdio.h>

int main(){
    
long int borders[4472];

long int i=2;
long int k,t;
int j;
int d,x,y;

borders[0]=1;
j=0;
for (j=1;j<4472;j++)
 borders[j]=borders[j-1]+(i++);

  scanf("%d",&k);
  d=0;
  while(k>borders[d])d++;
  if(d==0){ x=1;y=1;}
  else {
        t=k-borders[d-1]-1;
        if((d%2)==0){x=d+1-t;y=1+t;}
        else{y=d+1-t;x=1+t;}
  }

printf("TERM %d IS %d/%d",k,x,y) ;




while(scanf("%d",&k)!=EOF){
  d=0;
  while(k>borders[d])d++;
  if(d==0){ x=1;y=1;}
  else {
        t=k-borders[d-1]-1;
        if((d%2)==0){x=d+1-t;y=1+t;}
        else{y=d+1-t;x=1+t;}
  }

printf("\nTERM %d IS %d/%d",k,x,y) ;
}



}

        
