

#include <stdio.h>
#include <fcntl.h>

double V[20][20][20];
int path[20][20][20];
int sol[20];


void init(int n){
    
    int i,j,k;
    for (i=0;i<n;i++)
     for (j=0;j<n;j++)
      for (k=0;k<n;k++){
        path[i][j][k]=-1;
        V[i][j][k]=0;
    }    
for (i=0;i<n;i++)sol[i]=-1;
}        

  
void scanvalues(int n){

 int i,j,k;
    
    for (i=0;i<n;i++)
     for (j=0;j<n;j++)
     if (i==j) 
         V[i][j][0]=1.0;
     else 
         scanf("%lf",&V[i][j][0]);
}



void printsol(int n){

int p,i,j,steps,get=0;

 for (steps=0;steps<n;steps++)
   for (i=0;i<n;i++)
       if (V[i][i][steps]>1.01){
           sol[steps+1]=sol[0]=i;
           p=path[i][i][steps];
           j=steps;
           while (steps>0){
              sol[steps--]=p;
              p=path[i][p][steps];
           }    
        
         
          for(i=0;i<j+2;i++)
          printf("%d ",sol[i]+1);
          printf("\n");
          steps=i=n;
          get=1;
        
       }
       
if(get==0) printf("no arbitrage sequence exists\n"); 
}              


void Floyd(int n){
    
    int i,j,k,steps;
    double temp;
    for(steps=1;steps<n;steps++)
     for(k=0;k<n;k++)
      for (i=0;i<n;i++)
       for (j=0;j<n;j++){
           temp=V[i][k][steps-1] * V[k][j][0]; 
           if (temp > V[i][j][steps]){
               V[i][j][steps]=temp;
               path[i][j][steps]=k;
            
           }    
       }    
}    
  
                
main()
{
int n;
   
   
     while((scanf  ("%d", &n))!=EOF){
          
          init(n);
          scanvalues(n);
          Floyd(n);
          printsol(n);
          
          }   
}
