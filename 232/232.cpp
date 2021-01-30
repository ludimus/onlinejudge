#include <iostream>
#include <cstdio>

using namespace std;

char M[12][12];
int  N[12][12];

void initM()
{
int i,j;

  for(i=0;i<12;i++)
    for(j=0;j<12;j++)
    M[i][j]='*';
}


void initN()
{
int i,j;

  for(i=0;i<12;i++)
    for(j=0;j<12;j++)
    N[i][j]=0;
}

void printM()
{
int i,j;

  for(i=0;i<12;i++){
    for(j=0;j<12;j++)
     cout<<M[i][j];
     cout<<endl;
  }
 cout<<endl;
}

void printN()
{
int i,j;

  for(i=0;i<12;i++){
    for(j=0;j<12;j++)
     cout<<N[i][j];
     cout<<endl;
  }
 cout<<endl;
}

int main()
{
 char line[15];
 int row,col,r,c,k,num,puzzlenum=1;

 //freopen("232.in","r",stdin);
 gets(line);
 sscanf(line,"%d %d",&row,&col);
 while(row!=0)
 {
     if(puzzlenum>1)cout<<endl;
     cout<<"puzzle #"<<puzzlenum++<<":"<<endl;
     initM();

     for(r=0;r<row;r++)
      {
          gets(line);
          for(c=0;c<col;c++)
           M[r+1][c+1]=line[c];
      }
      //printM();


     // make number matrix
     initN();
     num=1;
     for(r=1;r<=row;r++)
     for(c=1;c<=col;c++)
      if(M[r-1][c]=='*' || M[r][c-1]=='*')
        if(M[r][c]!='*')N[r][c]=num++;
    // printN();

     // print across words;
     cout<<"Across"<<endl;
     for(r=0;r<12;r++)
      for(c=0;c<12;c++)
        if(N[r][c]!=0 && M[r][c-1]=='*')
        {
            printf("%3d",N[r][c]);
            cout<<".";
            k=c;
            while(M[r][k]!='*')cout<<M[r][k++];
            cout<<endl;
        }

      // print across words;
     cout<<"Down"<<endl;
     for(r=0;r<12;r++)
      for(c=0;c<12;c++)
        if(N[r][c]!=0 && M[r-1][c]=='*')
        {
            printf("%3d",N[r][c]);
            cout<<".";
            k=r;
            while(M[k][c]!='*')cout<<M[k++][c];
            cout<<endl;
        }

     gets(line);
     sscanf(line,"%d %d",&row,&col);
 }

return 0;
}
