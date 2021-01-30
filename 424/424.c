

#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int sum[150];
char inputstring[150];
int inputint[150];

void addstring(char *s,int l)
{
    int c=0;
    int j=149;
    int t,i;
    
    for(i=0;i<150;i++)
        inputint[i]=0;
        
    for(i=l-1;i>=0;i--){
     inputint[j--]=s[i]-48;
    }    
    
    for(i=149;i>=0;i--){
        t=inputint[i]+sum[i]+c;
        sum[i]=t%10;
        if (t>9) c=1;else c=0;
    }
}              
main()
{
int n,i,j,l,t;

    for (i=0;i<150;i++)
      sum[i]=0;
     
     
        

 while(scanf("%s", inputstring)!=EOF)
  if ((strlen(inputstring)==1)&& (inputstring[0]=='0')) break;
   else  addstring(inputstring,strlen(inputstring)); 
   
 n=0;
 while(sum[n]==0)n++;
 
 for(i=n;i<150;i++)
 printf("%d",sum[i]);
   
  
}

      
  
