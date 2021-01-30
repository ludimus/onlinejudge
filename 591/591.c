

#include <stdio.h>
#include <fcntl.h>

                
main()
{
int n,set,nmoves,avg,sum,i;
int m[50];
set=1;

scanf("%d",&n);

   while(n!=0){
  
      
     sum=0;
     for (i=0;i<n;i++){
       scanf("%d",&m[i]);
       sum+=m[i];
     }
   
   avg=sum/n;
    
   nmoves=0;
  
   for (i=0;i<n;i++)
    if (m[i]>avg) nmoves+=m[i]-avg;
  
    printf("Set #%d\n",set++);
    printf("The minimum number of moves is %d.\n",nmoves);
  
  scanf("%d",&n);
  
  }

}
