

#include <stdio.h>
#include <fcntl.h>

                
main()
{
int n;
int m[100][100];
int h,v;
int i,j;
int noddh,noddv;
int htot,vtot;

scanf("%d",&n);

do {
   
   for (i=0;i<n;i++)
        for (j=0;j<n;j++)
         scanf("%d", &m[i][j]);
  

 
   noddh=noddv=0;
 
   for (i=0;i<n;i++){
        htot=vtot=0;
        for (j=0;j<n;j++){
         htot+=m[i][j];
         vtot+=m[j][i];
        }
        if((htot%2)==1)
            {
              noddh++;
              if (noddh==1)h=i;
             }
        if((vtot%2)==1)
            {
              noddv++;
              if (noddv==1)v=i;
             }
    }
 
    if ((noddh==0) && (noddv==0)) printf ("OK\n");
    else if ((noddh==1) && (noddv==1)) printf ("Change bit (%d,%d)\n",h+1,v+1);
         else printf("Corrupt\n");
                    
       
      
    scanf("%d",&n);
   } while(n!=0);

}
