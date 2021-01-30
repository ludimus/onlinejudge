#include <stdio.h>

int main(){

double result;
double a,b;
int i;

if (b> (a/2)) b=a-b;


while(scanf("%d %d",&a,&b)!=EOF){
  if((a==0) && (b==0)) exit(0);
  
 
 result=1.0;
  for (i=b;i>0;i--){
 
   result=result*(double)i/a--;
 
  }   
  printf("%.0f\n",(1/result));
}
}  

