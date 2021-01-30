

#include <stdio.h>
#include <fcntl.h>

const int MAXLEN=1050;
int len[5001];
int fibo[5001][1050];

 
                
main()
{
int n,i,j,c,l,t;

    for (i=0;i<5001;i++)
      for (j=0;j<MAXLEN;j++)
        fibo[i][j]=0;
     l=1;   
     fibo[0][MAXLEN]=0;len[0]=1;
     fibo[1][MAXLEN]=1;len[1]=1;
     c=0;
     
     for (i=2;i<5001;i++)
     {
         for (j=MAXLEN;j>(MAXLEN-l);j--){
           t=fibo[i-1][j]+fibo[i-2][j]+c;
           fibo[i][j]=t%10;
           if (t>9) c=1; else c=0;
           if((c==1) && (j==(MAXLEN-l+1))){
             l++;
             fibo[i][j-1]=1;
           }
           len[i]=l;
         }        
          
      }    

 while(scanf("%d", &i)!=EOF)
  if((i>=0) && (i<5001)){
   j=len[i];
   printf("The Fibonacci number for %d is ",i); 
   while (j>0)
     printf("%d",fibo[i][MAXLEN+1-j--]);
   printf("\n");
  } 
}  



