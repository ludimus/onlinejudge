#include <iostream>

using namespace std;

int main ()
{
 int n,m,f;
 int D[21];
 int DS[21];
 int i,max,inuse,dn,s,top;
 
// freopen("661.in","r", stdin);
 cin>>n>>m>>f;
 s=1;
  do
  {
    max=0;
    inuse=0;
    top=0;
    for(i=1;i<n+1;i++)
    {
     cin>>D[i];
     DS[i]=0;
     }
    for(i=0;i<m;i++)
    {
     cin>>dn;
     
     if(DS[dn]==0)
       {
        inuse+=D[dn];
        DS[dn]++;
        if (inuse>max) max=inuse;
        if ((inuse>top)&& (inuse<=f))top=inuse;
        }
     else
        {
         inuse-=D[dn];
         DS[dn]--;
         }
   //  cout <<"switched "<<D[dn] <<" ampere inuse: "<<inuse <<" max:" << max <<"\n";
     }
     cout << "Sequence "<< s << "\n";
     if(max>f) cout<<"Fuse was blown.\n\n";
     if(max<=f) cout<<"Fuse was not blown.\nMaximal power consumption was " << top<< " amperes.\n\n";                                                         
     cin>>n>>m>>f;
     s++;
  }while((n!=0)&&(m!=0)&&(f!=0));
    
return (0);
}
