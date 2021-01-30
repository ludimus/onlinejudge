#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
int i,j,n,m,f;
int M[102][102];
char CM[102][102];

freopen("10189.in","r",stdin);
f=1;
cin>>m>>n;
while((n>0)&&(m>0))
{
  for(i=0;i<(m+2);i++)
    for(j=0;j<(n+2);j++)
     M[i][j]=0;
  
  for(i=1;i<=m;i++)
    for(j=1;j<=n;j++){
      cin>>CM[i][j];
      if(CM[i][j]=='*')
      {
        M[i-1][j-1]++;
        M[i-1][j]++;
        M[i-1][j+1]++;
        M[i][j-1]++;
        M[i][j+1]++;
        M[i+1][j-1]++;
        M[i+1][j]++;
        M[i+1][j+1]++;
      
      }
  }
  if(f>1)cout<<endl;
  cout<<"Field #"<<f++<<":"<<endl;
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++)
       if(CM[i][j]=='*')cout<<"*";
       else cout<<M[i][j];
    cout<<endl;
    } 
    
   cin>>m>>n;
}
return 0;
}
