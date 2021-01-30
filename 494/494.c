#include <stdio.h>
#include <fcntl.h>
#include <string.h>

char inputstring[1024];
        
int ischar(char c){
    int r=0;
      if ((c>='a')&&(c<='z'))r=1;
      if ((c>='A')&&(c<='Z'))r=1;
return(r);
}      


void process_it(char *s,int l)
{
   int i,cf,wc=0;
   cf=0;
  
   
   for(i=0;i<l;i++){
  
       switch(ischar(s[i]))
    {
    case 1 : if(cf==0){wc++;cf=1;}break;
    case 0 : if(cf==1) cf=0;break;
    }     
}    
    printf("%d",wc);  

}         

main(){
 int i=0; 
 char c;  
 while(scanf("%c", &c)!=EOF){
   
     if(c=='\n'){printf("\n");process_it(inputstring,i);i=0;}
     else inputstring[i++]=c;

    
}   
}

      
  
