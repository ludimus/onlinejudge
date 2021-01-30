
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>


int input[30][10];
int fit[30][30];
int path[30][30];
int sumbox[30];
int boxprocessed[30];
int boxes,dim;
  
void init()
{
    int i,j;
    for (i=0;i<30;i++)
     for (j=0;j<10;j++){
      input[i][j]=0;
      }
    for (i=0;i<30;i++)
     for (j=0;j<30;j++){
      fit[i][j]=0;
      path[i][j]=0;  
    }    
    for (i=0;i<30;i++){
        sumbox[i]=0;
        boxprocessed[i]=0;
    }    

}        
     
void printinput(int boxes,int dim)
{
    int i,j;
    for (i=0;i<boxes;i++){
     for (j=0;j<dim;j++)
      printf("%d ",input[i][j]);
    printf("\n");
}
printf("\n");
}        

void printfit(int boxes,int dim)
{
    int i,j;
    printf("\nFitmatrix:\n");
    for (i=0;i<boxes;i++){
     for (j=0;j<dim;j++)
      printf("%d ",fit[i][j]);
    printf("\n");
}
printf("\n");

for (i=0;i<boxes;i++)
  printf("%d ",sumbox[i]);
  printf("\n");
for (i=0;i<boxes;i++)
  printf("%d ",boxprocessed[i]);
} 

void printpath(int boxes,int dim)
{
    int i,j;
    
    printf("\nPathmatrix:\n");
    for (i=0;i<boxes;i++){
     for (j=0;j<dim;j++)
      printf("%d ",path[i][j]);
    printf("\n");
}
printf("\n");
}

void sortboxes(int boxes,int dim)
{
  int i,j,l,t;
  
 for (i=0;i<boxes;i++){
     l=dim-1;
     j=0;
     while(l>0){
       for(j=0;j<l;j++)
       if(input[i][j]>input[i][j+1])
       {
           t=input[i][j];
           input[i][j]=input[i][j+1];
           input[i][j+1]=t;
       }        
     l--;
     }     
}   
}   

int doesfit(int boxa, int boxb, int dim)
{
int f=1;
int l=0;
 while(f && l<dim)
 if (input[boxa][l]>=input[boxb][l++]) f=0;

return(f);
} 


void fitboxes(int boxes, int dim)
{
int i,j;

for (i=0;i<boxes;i++)
for (j=0;j<boxes;j++)
 fit[i][j]=doesfit(i,j,dim);

for (i=0;i<boxes;i++){
   for (j=0;j<boxes;j++)
   sumbox[i]+=fit[i][j];
}    
}

int maxpath(int box,int boxes){
    
    int i,v=0;
    for (i=0;i<boxes;i++)
    if (path[box][i]>v) v=path[box][i];
return(v);
}    
    
    



void makepath(int boxes){
int i,j,v;
int c;
 for (i=0;i<(boxes-1);i++){
    c=0;
    while (!((boxprocessed[c]==0)&&(sumbox[c]==0))) 
    c++;
    boxprocessed[c]=1;
    
    
    for (j=0;j<boxes;j++){
        v=maxpath(c,boxes);
        if(fit[j][c]==1){
            path[j][c]=v+1;
            fit[j][c]=0;
            sumbox[j]--;
        }    
    }    
    }   
    
}    

void printsol(int boxes){
    
    int maxval=0;
    int maxrow=0;
    int i,j;
    
    for(i=0;i<boxes;i++)
    for(j=0;j<boxes;j++)
      if(path[i][j]>maxval){
          maxval=path[i][j];
          maxrow=i;
      }
    
      printf("%d\n",maxval+1);
      for (i=maxval;maxval>=0;maxval--)
          for(j=0;j<boxes;j++)
             if (path[maxrow][j]==maxval){
                 printf("%d ",maxrow+1);
                 maxrow=j;
                 j=boxes;
             }               

printf("\n");
}

  
                
main()
{
int i,j;
  
#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
   
   
     while((scanf  ("%d %d", &boxes,&dim))!=EOF){
          init();
          for (i=0;i<boxes;i++)
           for(j=0;j<dim;j++)
           scanf("%d",&input[i][j]);
          sortboxes(boxes,dim);
          fitboxes(boxes,dim);
          makepath(boxes);
          printsol(boxes);
          }   
}
