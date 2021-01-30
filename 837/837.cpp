#include <iostream>
#include <cstdio>

using namespace std;

struct film
 {
  double x1;
  double x2;
  double r;
}L[5000];

//film L[5000];
double X[10000];


void sortx(int n)
{
  double temp;
  int i,j,l;
  l=n-1;
  for(i=0;i<n-1;i++)
    for(j=0;j<l;j++)
        if(X[j]>X[j+1])
        {                
          temp=X[j+1];
          X[j+1]=X[j];
          X[j]=temp;
        }
}                       






int main()
{
 int nc,nl,i,j;
 double x1,x2,y1,y2,r,temp;
 int nitems;
 
 cin>>nc;
 while(nc--)
 {
   nitems=0;
   cin>>nl;
   while(nl--)
   {
    cin>>x1>>y1>>x2>>y2>>r;
    if(x1>x2){temp=x1;x1=x2;x2=temp;}
    X[nitems*2]=x1;
    X[nitems*2+1]=x2;
    L[nitems].x1=x1;                   
    L[nitems].x2=x2;                   
    L[nitems].r=r;
    nitems++;                   
   } //nl
   
    //for(j=0;j<nitems;j++)
    //   {
    //    printf("%.3f ", L[j].x1);
    //    printf("%.3f ", L[j].x2);
    //    printf("%.3f ", L[j].r);
   //     cout<<endl;        
   //    }
   
   sortx(nitems*2);
  // for(i=0;i<nitems*2;i++)
  // printf("%.3f \n", X[i]);
   
   cout<<nitems*2+1<<endl;
   printf("-inf %.3f 1.000\n",X[0]);
   for(i=0;i<nitems*2-1;i++){
       r=1;
       for(j=0;j<nitems;j++)
         if((X[i]>=L[j].x1)&& (X[i]<L[j].x2)) r*=L[j].r;
       printf("%.3f ", X[i]);
       printf("%.3f ", X[i+1]);
       printf("%.3f\n",r);
       }
   
   printf("%.3f +inf 1.000\n",X[nitems*2-1]);                         
   if(nc>0) cout<<endl;

  } //nc
 return 0;   
}
