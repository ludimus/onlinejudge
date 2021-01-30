
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <math.h>


int lineh[10000];     
int linel[10000];
                
main()
{
  
  int l,r,h;
  int i,j,v,t;
  
  
#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  for (i=0;i<10000;i++)lineh[i]=linel[i]=0;
     while((scanf  ("%d %d %d", &l, &h, &r))!=EOF)
     {
        if(r<l){t=l;l=r;r=t;}
        for (i=l;i<=r;i++){
            if (linel[i]<h)linel[i]=h;
            if (lineh[i]< h){ 
                linel[i]=lineh[i];
                lineh[i]=h;
               }
        }  
     /*
     printf("\n%d %d %d\n",l,h,r);
     for (j=0;j<45;j++) printf("%2d ",lineh[j]);

     printf("\n");
     for (j=0;j<45;j++) printf("%2d ",linel[j]);

     printf("\n");
     for (j=0;j<45;j++) printf("%2d ",j);
     */
     }
     
      
      v=0;
      for (i=-1;i<10000;i++)       
         if (lineh[i+1]!=v){
             if((lineh[i+1]>v)&&(linel[i+1]>=lineh[i])) {printf("%d %d ", i+1,lineh[i+1]);v=lineh[i+1];}
             if((lineh[i+1]>v)&&(linel[i+1]<lineh[i])) {printf("%d %d %d %d ", i,linel[i], i+1,lineh[i+1]);v=lineh[i+1];} 
             
             if((lineh[i+1]<v)&&(lineh[i+1]<=linel[i])) {printf("%d %d ", i,linel[i]);v=lineh[i+1];}
             if((lineh[i+1]<v)&&(lineh[i+1]>linel[i])) {printf("%d %d %d %d ", i,linel[i], i+1,lineh[i+1]);v=lineh[i+1];} 
     }       
            

}
