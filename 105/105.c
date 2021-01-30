
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <math.h>


int lineh[20000];     

                
main()
{
  
  int l,r,h;
  int i,j,s,t;
  
  
#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
   for (j=0;j<20000;j++) lineh[j]=0;
     while((scanf  ("%d %d %d", &l, &h, &r))!=EOF)
     {
        if(r<l){t=l;l=r;r=t;}
        for (i=l;i<r;i++){
            if (lineh[i]<h)lineh[i]=h;
           
        }  
 }    
     
    
     s=0;
     for (j=0;j<20000;j++)
     if(lineh[j]!=s){
         printf("%d %d ",j,lineh[j]);
         s=lineh[j];
     }    

}
