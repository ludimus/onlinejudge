
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct _applicant{
        struct _applicant *next;
        struct _applicant *prev;
        int nr;
} applicant;

applicant queue[21];

        
void initqueue(int n){
    int i;
    
    
    for (i=1;i<=n;i++){
        queue[i].nr=i;
        queue[i].next=&queue[i+1];
        queue[i].prev=&queue[i-1];
    }    
    queue[n].next=&queue[1];
    queue[1].prev=&queue[n];
    for (i=n+1;i<20;i++) queue[i].next=queue[i].prev=NULL;
}

void printqueue(applicant *p,int n){
    int i;
          
        for (i=0;i<n;i++){
        {
         printf(" %d",p->nr);
         p=p->next;
        }
    printf("\n");
    }
}                 

rm_applicant(applicant *a){

applicant *p;
applicant *n;

    p=a->prev;
    n=a->next;
    p->next=n;
    n->prev=p;
    a->next=NULL;
    a->prev=NULL;
    printf("%3d",a->nr);
}    


applicant *nextleft(applicant *a)
{
int i=1;
  while (queue[i].nr!=a->nr)i++;
  while (queue[i].next==NULL){i++;if(i==20) i=1;}
 
return(&queue[i]);
}    

applicant *nextright(applicant *a)
{
int i=1;
  while (queue[i].nr!=a->nr)i++;
  while (queue[i].prev==NULL){i--;if(i==0) i=20;}
  
return(&queue[i]);
}    


                
main()
{

int n,left,k,m,i;
applicant *l;
applicant *r;
bool go=true;

#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
 // close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  
   
 scanf("%d %d %d", &n, &k, &m);
 if(k==0 && n==0 && m==0) go=false;
 while (go) {
       if ((n>0) && (n<20)){
            left=n;
            initqueue(n);    
            
            l=&queue[1];
            r=&queue[n];
           
            while (left>0){
              for(i=1;i<k;i++)l=l->next;
              for(i=1;i<m;i++)r=r->prev;
                if (l==r){rm_applicant(l);left--;} 
                 else {rm_applicant(l);rm_applicant(r);left-=2;}
              
              if (left>0){
               l=nextleft(l);     
               r=nextright(r);
               printf(",");
               }
              else printf("\n");
           }              
     
     }    
     scanf("%d %d %d", &n, &k, &m);  
     if(k==0 && n==0 && m==0) go=false;  
 }        
   
}
