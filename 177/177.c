
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

char fold[8192];

typedef struct _coord {
        int maxh;
        int minh;
        int maxv;
        int minv;
        
} coord;

coord s[14];
char screen[220][140];

char inv(char c)
{
    if (c=='l') return ('r');
    else return('l');
}    

void genfold()
{
    int i,len,t;
    len=1;
    
    for (i=1;i<14;i++)
    {
        fold[len]='l';
        
        for(t=0;t<(len-1);t++)
            fold[len+1+t]=inv(fold[len-1-t]);
        len=(len*2);
  } 
}  
            
void compute_screens()      
{
    int n,dir,m,i,maxh,minh,maxv,minv,h,v;
    
        
      for (n=1;n<14;n++)
         {
         s[n].maxh=s[n].minh=s[n].maxv=s[n].minv=1;
         m=2;
         dir=1;
         h=1;
         v=1;
         
         for (i=1;i<n;i++)m*=2;
         for (i=1;i<m;i++){
          
           switch(dir){
           
             case    1 : if(fold[i]=='l') { dir=2;h++;}      else {dir=4;v--;h++;}break;
             case    2 : if(fold[i]=='l') { dir=3; h--;v++;} else {dir=1;h++;v++;}break;
             case    3 : if(fold[i]=='l') { dir=4; v--;h--;} else {dir=2;h--;}break;
             case    4 : if(fold[i]=='l') { dir=1; h++;}    else {dir=3;h--;}break;
           }            
           
          if (h>s[n].maxh)s[n].maxh=h;
          if (h<s[n].minh)s[n].minh=h;          
          if (v>s[n].maxv)s[n].maxv=v;       
          if (v<s[n].minv)s[n].minv=v;
         }
/*      printf("n=%d maxh=%d minh=%d maxv=%d minv=%d\n",n,s[n].maxh,s[n].minh,s[n].maxv,s[n].minv); */
  
      }
                

}
void clear_screen()
{
int h,v;

  for (v=0;v<140;v++)
   for (h=0;h<220;h++)
        screen[h][v]=0x20;
}    

print_screen(int n){
    
    int h,v,endh;
    for (v=140-(s[n].maxv-s[n].minv+1);v<140;v++)
    {
      endh=219;
      while(screen[endh][v] ==0x20) endh--;
      
      for (h=0;h<=endh;h++) 
        printf("%c",screen[h][v]);
        printf("\n");
     }
        printf("^\n");
}    

draw_screen(int n)
{
int i,m=2;
int h,v,dir;

    for (i=1;i<n;i++)m*=2;
    
    h=((s[n].minh)-1)*-1;
    v=138+s[n].minv;
    dir=1;
    screen[h][v]='_';
 
    for (i=1;i<m;i++){
      
      switch(dir){
           
             case    1 : if(fold[i]=='l') { dir=2;h++;}      else {dir=4;v++;h++;}break;
             case    2 : if(fold[i]=='l') { dir=3; h--;v--;} else {dir=1;h++;v--;}break;
             case    3 : if(fold[i]=='l') { dir=4; v++;h--;} else {dir=2;h--;}break;
             case    4 : if(fold[i]=='l') { dir=1; h++;}    else {dir=3;h--;}break;
           }  
   
      if((dir==2) || (dir==4)) screen[h][v]='|'; else screen[h][v]='_';     
    }    
}    
     
        
               
main()
{
  
  int n,i;
 
  
#ifndef ONLINE_JUDGE
  close (0); open ("myprog.in", O_RDONLY);

#endif
  
  n=1;
  
  genfold();
  compute_screens();
  scanf  ("%d", &n );
  while(n!=0){
   if(n<14 && n >0){
     clear_screen();
     draw_screen(n);
     print_screen(n);
   }
   scanf  ("%d", &n );
  }
        
}
