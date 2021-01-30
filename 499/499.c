#include <stdio.h>

int ischar(char c){
    int r;
    r=-1;
    if((c>='A') && (c<='Z')) r=1;
    if((c>='a') && (c<='z')) r=1;
return(r);
}    


int main(){
    char s[1024];
    int sl,i,H,A[256];
    
    while (gets(s)){
          
          sl=strlen(s);
          for(i=0;i<256;i++)
             A[i]=0;
          H=0;
          for(i=0;i<sl;i++)
           {
             if(ischar(s[i])==1) A[s[i]]++;
             if(A[s[i]]>H)H=A[s[i]];
           }
           for(i=0;i<256;i++)
               if(A[i]==H)printf("%c",i);
           printf(" %d\n",H);
           }
}                              
