
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _block {
        struct _block *next;
        int nr;
} block;

block line[25];
block blocks[25];
        
void initline(int n){
    int i;
    
    for (i=0;i<n;i++){
        blocks[i].nr=i;
        line[i].nr=i;
        line[i].next=&blocks[i];
    }    
}

void printline(int n){
    int i;
    block *p;
    
    for (i=0;i<n;i++){
        printf("%d:",line[i].nr);
        p=&line[i];
        while (p->next){
         p=p->next;
         printf(" %d",p->nr);
        }
    printf("\n");
    }
}                 
    
   
int findstack(int blocknr, int n)
{
    int i,ret=0;
    block *p;
    
    for (i=0;i<n;i++){
        p=&line[i];
        while (p->next){
         p=p->next;
         if((p->nr)==blocknr)ret=i;
        }
    }
return(ret);
}                 


bool legalcommand(int first, int second, int n)
{
 bool result=true;

     if (first==second) result=false;
     if (findstack(first,n)==findstack(second,n)) result=false;
     if (first  >= n) result=false;
     if (second >= n) result=false;
     if (first  < 0)  result=false; 
     if (second < 0)  result=false; 
 return (result);        
}

void return_blocks(int stack, int blocknr){
     block *p;
     int linenr;
          
     p=&line[stack];
     p=p->next;
     
     while((p->nr)!=blocknr) p=p->next;
     
      while(p->next){
          linenr=p->next->nr;
     
          line[linenr].next=p->next;
          p->next=NULL;
          p=line[linenr].next;
     }    
}        

stack(int s1, int first, int s2, int second)
{
    block *p1;
    block *p2;
    
    p2=&line[s2];
    p1=&line[s1];
    while(p2->next)p2=p2->next;                
    while((p1->next->nr)!=first) p1=p1->next;   
    p2->next=p1->next;
    p1->next=NULL;
}    
    
    
void moveonto(int first, int second, int n){
    
    int s1,s2;
    s1=findstack(first,n);
    s2=findstack(second,n);
    
    return_blocks(s1,first);
    return_blocks(s2,second);
    stack(s1,first,s2,second);
    
}    
    
void moveover(int first, int second, int n){
    
    int s1,s2;
    s1=findstack(first,n);
    s2=findstack(second,n);
    
    return_blocks(s1,first);
    stack(s1,first,s2,second);
    
}      

 void pileonto(int first, int second, int n){
    
    int s1,s2;
    s1=findstack(first,n);
    s2=findstack(second,n);
    
    
    return_blocks(s2,second);
    stack(s1,first,s2,second);
    
}    

void pileover(int first, int second, int n){
    
    int s1,s2;
    s1=findstack(first,n);
    s2=findstack(second,n);
    
    
    stack(s1,first,s2,second);
    
}  
   
              
                
main()
{
char command[5],subcommand[5];
int first,second,n;

#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  
   
 scanf  ("%d", &n );       
 initline(n);
 
 do {
     scanf("%s %d %s %d", &command, &first, &subcommand, &second);
     
     if(legalcommand(first,second,n)){
        
         if(!strcmp(command,"move") && !strcmp(subcommand,"onto"))  moveonto(first,second,n);
         if(!strcmp(command,"move") && !strcmp(subcommand,"over"))  moveover(first,second,n);    
         if(!strcmp(command,"pile") && !strcmp(subcommand,"onto"))  pileonto(first,second,n);
         if(!strcmp(command,"pile") && !strcmp(subcommand,"over"))  pileover(first,second,n);
       
     }        
 }while (strcmp(command,"quit")); 
    
 printline(n);
    
}
