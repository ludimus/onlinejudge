#include <iostream>

using namespace std;

int main()
{
int M[500][500];

int W,H,N,R;
int i,j,p;
int x1,x2,x3,y1,y2,y3;

//freopen("10703.in","r",stdin);

cin>>W>>H>>N;

while ((W!=0)&&(H!=0))
{
      // cout<< "Case: "<<W<<H<<N<<endl;
      for(i=0;i<W;i++)
       for(j=0;j<H;j++)
         M[i][j]=0;
      
      for(p=0;p<N;p++)
      {
       cin>>x1>>y1>>x2>>y2;
       if(y2<y1){y3=y1;y1=y2;y2=y3;}
       if(x2<x1){x3=x1;x1=x2;x2=x3;}
       for (i=x1-1;i<=x2-1;i++)
        for(j=y1-1;j<=y2-1;j++)
         M[i][j]=1;
      }
 
      R=0;
      for(i=0;i<W;i++)
       for(j=0;j<H;j++)
         if (M[i][j]==0) R++; 
      if(R==0) cout<< "There is no empty spots.\n";
      if(R==1) cout<< "There is one empty spot.\n";
      if(R>1) cout<< "There are " <<R <<" empty spots.\n";
        
      
      cin>>W>>H>>N; 
        
}                      
          
return 0;
}
