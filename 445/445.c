#include <stdio.h>
#include <fcntl.h>
#include <string.h>

char inputstring[1024];
        
int isdiget(char c){
    int r=0;
      if ((c>='1')&&(c<='9'))r=1;
return(r);
}      


void process_it(char *s,int l)
{
   int i,j,sum;
   sum=0;
   
   for(i=0;i<l;i++){
   
    if(isdiget(s[i]))sum=sum+s[i]-48;
    else
       switch (s[i])
       {
         case '!' : printf("\n");sum=0;break;
         case 'b' : for (j=0;j<sum;j++) printf(" ",sum);sum=0;break;
         default  : for (j=0;j<sum;j++) printf("%c",s[i]);sum=0;break;
       }      
    }  
   printf("\n");
}         

main(){
 int i=0; 
 char c;  
 while(gets(inputstring)){
   
     if (strlen(inputstring)==0)printf("\n");
     else process_it(inputstring,strlen(inputstring));
     

    
}   
}

      
  
