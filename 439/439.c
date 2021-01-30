#include <stdio.h>
#include <fcntl.h>

int board[8][8];

fillmove(int x,int y,int val){
    if ((x>=0) && (x<8) && (y>=0) && (y<8) && (board[x][y]>val))
        board[x][y]=val;
}

int getmoves(int x1,int y1,int x2,int y2)
{
   
   int step=0;
   int i,j;
   
   for(i=0;i<8;i++)
      for(j=0;j<8;j++)
      board[i][j]=100;
   board[x1][y1]=0;
   
   while(board[x2][y2]==100){
        for(i=0;i<8;i++)
         for(j=0;j<8;j++) 
          if(board[i][j]==step){
              fillmove(i+1,j+2,step+1);
              fillmove(i+1,j-2,step+1);     
              fillmove(i+2,j+1,step+1);
              fillmove(i+2,j-1,step+1);     
              fillmove(i-1,j+2,step+1);
              fillmove(i-1,j-2,step+1);
              fillmove(i-2,j+1,step+1);
              fillmove(i-2,j-1,step+1);
          }                                                   
     step++;
    }    
     return(board[x2][y2]);
     
}

main(){
  
 char x1,x2,y1,y2;
 int xx1,yy1,xx2,yy2;
 
 while(scanf("%c%c %c%c\n",&x1,&y1,&x2,&y2)!=EOF){
       xx1=x1-97;
       yy1=y1-49;
       xx2=x2-97;
       yy2=y2-49;
    printf("To get from %c%c to %c%c takes %d knight moves.\n",x1,y1,x2,y2,getmoves(xx1,yy1,xx2,yy2));
}   
}

      
  
