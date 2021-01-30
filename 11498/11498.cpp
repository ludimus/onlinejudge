#include <iostream>

using namespace std;

int main()
{
int i,X,Y,x,y,nq;

freopen("11498.in","r",stdin);

cin>>nq;

while (nq!=0)
{
      cin>>X>>Y;
      
      for (i=0;i<nq;i++)
      {
          cin>>x>>y;
          if((x==X)|| (y==Y)) cout <<"divisa\n";
          if((x<X)&& (y>Y)) cout <<"NO\n";
          if((x>X)&& (y>Y)) cout <<"NE\n";
          if((x>X)&& (y<Y)) cout <<"SE\n";
          if((x<X)&& (y<Y)) cout <<"SO\n";
      }
      cin>>nq; 
}
    return 0;
}
