#include <stdio.h>
#include <fcntl.h>
#include <string.h>

char inputstring[1024];
        


     

main(){
 int i,l; 
  
 while(gets(inputstring)){
   
     l=strlen(inputstring);
     for (i=0;i<l;i++)
     printf("%c",inputstring[i]-7);
     printf("\n");
    } 
   
}

      
  
