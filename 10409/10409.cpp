#include <iostream>
#include <cstdio>

using namespace std;

int D[2][6];

void initD()
{
 D[0][0]=1;
 D[0][1]=2;
 D[0][2]=3;
 D[0][3]=4;
 D[0][4]=5;
 D[0][5]=6;

}



int main()
{

  int nturnes,t;
  string move;
  int cd,nd;

 // freopen("10409.in","r",stdin);
  cin>>nturnes;
  while(nturnes>0)
    {
     cd=0;
     nd=1;
     initD();
     for(t=0;t<nturnes;t++){
      cin>>move;
      //cout<<move<<endl;
      if(move=="north"){D[nd][0]=D[cd][4];D[nd][1]=D[cd][0];D[nd][5]=D[cd][1];D[nd][4]=D[cd][5];D[nd][2]=D[cd][2];D[nd][3]=D[cd][3];}
      if(move=="south"){D[nd][0]=D[cd][1];D[nd][1]=D[cd][5];D[nd][5]=D[cd][4];D[nd][4]=D[cd][0];D[nd][2]=D[cd][2];D[nd][3]=D[cd][3];}
      if(move=="east"){D[nd][0]=D[cd][2];D[nd][1]=D[cd][1];D[nd][5]=D[cd][3];D[nd][4]=D[cd][4];D[nd][2]=D[cd][5];D[nd][3]=D[cd][0];}
      if(move=="west"){D[nd][0]=D[cd][3];D[nd][1]=D[cd][1];D[nd][5]=D[cd][2];D[nd][4]=D[cd][4];D[nd][2]=D[cd][0];D[nd][3]=D[cd][5];}
      if(t==nturnes-1)
      cout<<D[nd][0]<<endl;
      cd=(cd+1)%2;
      nd=(nd+1)%2;
     }
     cin>>nturnes;
    }




  return 0;
}
