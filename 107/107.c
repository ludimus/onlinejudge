
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <math.h>


     
                
main()
{
  
  unsigned long int a,b;
  int i;
  double h,n,t1,t2,cnw,htot;
  double t3;
  
#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  
     scanf("%d %d", &a, &b);
     while(a!=0) {
     
           h=n=1;
       if (a!=1){
         do{
            t1=pow((double)a,(double)1/h);
            t2=pow((double)b,(double)1/h++);
            t3=t1-t2;
            
            } while(!((t3>0.99999) && (t3<1.000001)));
             
         h=h-1;
         n=t2;
         cnw=htot=0;
       
         for (i=0;i<h;i++)
           {
             cnw+=pow(n,i);
             htot+=pow(n,i)*pow(n+1,h-i);
            }     
         htot+=pow(n,h);
       
         printf ("%.0f %.0f\n",cnw,htot);
      } 
      else   printf ("0 %d\n",b ); 
      
      scanf("%d %d", &a, &b);
    }   
}
