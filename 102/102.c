
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>


     
                
main()
{
  unsigned long int b1b,b1g,b1c,b2b,b2g,b2c,b3b,b3g,b3c,low,temp;
  char sol[4]; 

#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  
   
     while((scanf  ("%d %d %d %d %d %d %d %d %d", &b1b,&b1g,&b1c,&b2b,&b2g,&b2c,&b3b,&b3g,&b3c))!=EOF){
                  
          low=  b2b+b3b + b1c+b3c + b1g+b2g;strcpy(sol,"BCG");
          temp= b2b+b3b + b1g+b3g + b1c+b2c;if(temp<low){low=temp;strcpy(sol,"BGC");}
          temp= b2c+b3c + b1b+b3b + b1g+b2g;if(temp<low){low=temp;strcpy(sol,"CBG");}
          temp= b2c+b3c + b1g+b3g + b1b+b2b;if(temp<low){low=temp;strcpy(sol,"CGB");}
          temp= b2g+b3g + b1b+b3b + b1c+b2c;if(temp<low){low=temp;strcpy(sol,"GBC");}
          temp= b2g+b3g + b1c+b3c + b1b+b2b;if(temp<low){low=temp;strcpy(sol,"GCB");}
          printf("%s %d\n",sol,low);  
          
          
    }   
}
