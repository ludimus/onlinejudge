#include <stdio.h>
    

main(){
 int f=0; 
 char c;
  
 while(scanf("%c",&c)!=EOF){
   
     if(c!=34) printf("%c",c);
     else
      if (f==0){printf("``");f=1;}
      else {printf("''");f=0;}
 }    
   
}

      
  
