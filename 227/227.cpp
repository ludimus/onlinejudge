#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

char M[5][5];
int row,col;

void printgame()
{
 int i,j;

 for(i=0;i<5;i++){
   for(j=0;j<5;j++){
      cout<<M[i][j];
      if(j<4)cout<<" ";
      }
   cout<<endl;
 }
}

bool readgame()
{
 int i,j;
 bool ret=true;
 char line[10];

 for(i=0;i<5;i++)
 {
   gets(line);
   //cout<<"L"<<line<<endl;
   if(!strcmp(line,"Z")){ret=false;i=5;}
   else
   for(j=0;j<5;j++)
      {
        M[i][j]=line[j];
        if(M[i][j]==' '){row=i,col=j;}
      }

 }
return ret;
}

bool checkmove(char a)
{
 bool ret=false;
 if(a=='A')ret=true;
 if(a=='B')ret=true;
 if(a=='L')ret=true;
 if(a=='R')ret=true;



 return ret;
}

int main()
{
int i,j,puzzlenum=1;
char dummy[10];
bool validmoves;
char move;

// freopen("227.in","r",stdin);

 while(readgame())
 {
   if(puzzlenum>1)cout<<endl;
   cout<<"Puzzle #"<<puzzlenum++<<":"<<endl;
   cin>>move;
   validmoves=true;

   while(move!='0')
    {
     if(validmoves)validmoves=checkmove(move);
     if(move=='A')
       {
         if(row==0)validmoves=false;
         else{M[row][col]=M[row-1][col];M[row-1][col]=' ';row--;}
       }
     if(move=='B')
       {
         if(row==4)validmoves=false;
         else{M[row][col]=M[row+1][col];M[row+1][col]=' ';row++;}
       }
     if(move=='R')
       {
         if(col==4)validmoves=false;
         else{M[row][col]=M[row][col+1];M[row][col+1]=' ';col++;}
       }
     if(move=='L')
       {
         if(col==0)validmoves=false;
         else{M[row][col]=M[row][col-1];M[row][col-1]=' ';col--;}
       }


     cin>>move;
    }
    gets(dummy);
    if(validmoves) printgame();
    else cout<<"This puzzle has no final configuration."<<endl;

 }


return 0;
}
