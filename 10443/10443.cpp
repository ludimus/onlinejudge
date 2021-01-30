#include <iostream>
#include <cstdio>

using namespace std;

char M[2][102][102];



void initM()
{
 int r,c,k;

 for(k=0;k<2;k++)
 for(r=0;r<102;r++)
 for(c=0;c<102;c++)
 {
     M[k][r][c]='X';

 }
}


void printM(int a,int row,int col)
{
  int r,c;

  for(r=0;r<row;r++){
    for(c=0;c<col;c++)
     cout<<M[a][r+1][c+1];
     cout<<endl;
  }

}

int main()
{
char line[102];
int row,col,r,c,life,ncases;
int nm,cm; //new matrix,currentmatrix

 //freopen("10443.in","r",stdin);
 gets(line);
 sscanf(line,"%d",&ncases);

 while(ncases--)
 {
  initM;
  gets(line);
  sscanf(line,"%d %d %d",&row,&col,&life);
  //scan field to current matrix 0
  for(r=0;r<row;r++)
  {
    gets(line);
    for(c=0;c<col;c++)
     M[0][r+1][c+1]=line[c];
  }
  //printM(0,row,col);
  nm=1;
  cm=0;
  while(life--){
     for(r=1;r<=row;r++)
      for(c=1;c<=col;c++)
       {
        if(M[cm][r][c]=='R')
         if((M[cm][r+1][c]=='P')||(M[cm][r-1][c]=='P')||(M[cm][r][c+1]=='P')||(M[cm][r][c-1]=='P'))M[nm][r][c]='P';else M[nm][r][c]='R';
        if(M[cm][r][c]=='P')
         if((M[cm][r+1][c]=='S')||(M[cm][r-1][c]=='S')||(M[cm][r][c+1]=='S')||(M[cm][r][c-1]=='S'))M[nm][r][c]='S';else M[nm][r][c]='P';
        if(M[cm][r][c]=='S')
         if((M[cm][r+1][c]=='R')||(M[cm][r-1][c]=='R')||(M[cm][r][c+1]=='R')||(M[cm][r][c-1]=='R'))M[nm][r][c]='R';else M[nm][r][c]='S';
       }
   if(life==0)printM(nm,row,col);

   nm=(nm+1)%2;
   cm=(cm+1)%2;
  }

  if(ncases>0)cout<<endl;
 }


return 0;
}
