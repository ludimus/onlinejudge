#include <iostream>

using namespace std;

int main()
{
  int nc,a,b,c;
  int hj,lj;
  
  cin>>nc;
  
  cout<<"Lumberjacks:"<<endl;
  while(nc--)
  {
    cin>>a;
    c=9;
    hj=0;
    lj=0;
    while(c--)
    {
     cin>>b;
     if(a>b)lj++;
     if(b>a)hj++;
     a=b;
    }
    if((hj==0)||lj==0)cout<<"Ordered"<<endl;
    else cout<<"Unordered"<<endl;
  }                       
    
    
 return 0;   
}    
    
