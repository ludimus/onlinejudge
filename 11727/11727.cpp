#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{

int cn,n;
int X,Y,Z,W;

//freopen("11727.in","r",stdin);

cin>>n;
cn=0;
while(n>0)
{
 cin>>X>>Y>>Z;
 cn++;
 if((X>Y)&&(X<Z))W=X;
 if((X>Z)&&(X<Y))W=X;
 if((Y>X)&&(Y<Z))W=Y; 
 if((Y>Z)&&(Y<X))W=Y;
 if((Z>X)&&(Z<Y))W=Z;
 if((Z>Y)&&(Z<X))W=Z;

 cout<< "Case "<<cn<<": "<<W<<endl;
 n--;
} 
return 0;

}
