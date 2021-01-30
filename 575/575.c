#include <math.h>
#include <stdio.h>


int main(){
    char skew[32];
    long int tot,p;
    int i;
    
    while (scanf("%s",skew)!=EOF){
        if( (strlen(skew)==1) && (skew[0]=='0'))
        exit(0);
        
        tot=0;
        p=2;
        for(i=strlen(skew)-1;i>=0;i--){
           tot+=((skew[i]-48)*(p -1));
          
        
            p*=2;
       }
     printf("%d\n",tot);
    }           
}           
           
