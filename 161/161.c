#include <stdio.h>
#include <fcntl.h>


int L[100];


int findslot(int low,int n){
    
    int s,i,ret,bingo;
    ret=18001;
    for (s=2*low;s<18001;s++){
        bingo=0;
        i=0;
        while((bingo==0)&&(i<n)){
            if( (s%(2*L[i])) >= (L[i]-5)) bingo=1;
            i++;
        }        
        if(bingo==0){ret=s;s=18001;}
        
     }
 return(ret);
}             


void printslot(int t){
    int h,m,s;
    
    if(t==18001) printf("Signals fail to synchronise in 5 hours\n");
    else{
      h=t/3600;
      printf("0%d:",h);
      t=t-(h*3600);
      m=t/60;
      if(m>9)printf("%d:",m); else printf("0%d:",m);
      s=t-(m*60);
      if(s>9)printf("%d\n",s); else printf("0%d\n",s);
    }    
}

main()
{
int n,i,low,t,quit;
   
     i=0;
     low=100;
     quit=0;
     while(scanf("%d", &n)){
          
          if(n!=0){
                   L[i++]=n;
                   if (n<low) low=n;
                   quit=0;
               }    
          else{
              quit++;
              if((quit==1)&&(i>1)){
                  printslot(findslot(low,i));
                   i=0;
                   low=100;
                   quit=0;
               }    
              if (quit==3) exit(0);
          }    
   }          
}
