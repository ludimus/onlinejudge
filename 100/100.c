
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


int getlength(n){
    
unsigned long int result=1;
    
    while(n!=1) { 
     if ((n%2)==1) 
         n=n*3+1;
     else
        n/=2;
     result++;
    }  
return(result);
}
     
                
main()
{
  unsigned long int f,s,i,longest=0,temp,low,high;

#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);
  close (1); open ("myprog.out", O_WRONLY | O_CREAT, 0600);
#endif
  
   
     while((scanf  ("%d %d", &f, &s))!=EOF){
          if (f>s){high=f;low=s;}
          else{high=s;low=f;}
          
          for (i=low;i<=high;i++){
                    temp=getlength(i);
                    if (temp>longest) longest=temp;
  
          }
          printf ("%d %d %d\n", f, s, longest);
          longest=0;
    }   
}
