#include <stdio.h>

int main(){
    
    char O[4]={'W','N','E','S'};
    
    int X,Y,cX,cY,cO,i;
    char cOc;
    char m[101];
    scanf("%d %d", &X,&Y);
    printf("Gridsize %d by %d\n", X,Y);
    while(scanf("%d %d %c",&cX,&cY,&cOc)!=EOF){
     if(cOc=='W')cO=0;
     if(cOc=='N')cO=1;
     if(cOc=='E')cO=2;
     if(cOc=='S')cO=3;
     printf("New Robot postion: %d:%d Orientation:%c\n", cX,cY,O[cO]);
     scanf("%s",m);
     printf("Moves: %s\n",m);
     for(i=0;i<strlen(m);i++){
     switch(m[i]){
        case  'R' : cO=(cO+1)%4;break;
        case  'L' : cO=(cO+3)%4;break;
        case  'F' : if(cO==0)cX-=1;
                    if(cO==1)cY+=1;          
                    if(cO==2)cX+=1;
                    if(cO==3)cY-=1;
                    break;
        default: break;
     }                
     
     printf("Robot postion: %d:%d Orientation:%c\n", cX,cY,O[cO]);
     }
    }
}
