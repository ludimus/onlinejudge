#include <iostream>
#include <cstdio>

using namespace std;

int M[12][12];
int MASK[12][12];


void clearfield()
{
 int i,j;

 for(i=0;i<12;i++)
 for(j=0;j<12;j++)
 {
     M[i][j]=0;
     MASK[i][j]=0;
 }

}

int main()
{
    int ngames,S,i,j,l;
    char line[100];
    bool gameover;

    freopen("10279.in","r",stdin);
    cin>>ngames;

    while(ngames--)
    {
        clearfield();
        gameover=false;
        cin>>S;
        gets(line);  //read eoln;
        for(l=0;l<S;l++)
        {
            gets(line);
         //   cout<<line<<endl;
            for(j=0;j<S;j++)
             if(line[j]=='*')
             {
                 M[l][j]++;
                 M[l][j+1]++;
                 M[l][j+2]++;
                 M[l+1][j]++;
                 M[l+1][j+1]=9;
                 M[l+1][j+2]++;
                 M[l+2][j]++;
                 M[l+2][j+1]++;
                 M[l+2][j+2]++;

             }

        }

        for(l=1;l<=S;l++)
        {
            gets(line);
          //  cout<<line<<endl;
            for(j=1;j<=S;j++)
             if(line[j-1]=='x'){
              MASK[l][j]=1;
              if(M[l][j]>8)gameover=true;
             }
        }
        for(i=1;i<=S;i++){
         for(j=1;j<=S;j++)
          if (M[i][j]>8 && gameover )cout<<'*';
          else if (MASK[i][j]==1)cout<<M[i][j];
          else cout<<'.';


          cout<<endl;
        }
    if (ngames>0)cout<<endl;
    gets(line); //get empty line

    }
}
