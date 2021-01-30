#include <iostream>

using namespace std;

int main(){
    
 int nc;
 int c=0;
 int a,b;
  int hj,lj,nw;
 
 cin>>nc;
 
 while(nc--)
 {
   cin>>nw;
   hj=0;
   lj=0;
   c++;
   cin>>a;
   while(nw>1)
   {
    cin>>b;
    //cout<<"comparing :"<<a<<" "<<b<<endl;
    if(a>b)lj++;
    if(b>a)hj++;
    a=b;
    nw--;
   }
   cout<<"Case "<<c<<": "<<hj<<" "<<lj<<endl;
 }             
                        
    
    
return 0;    
}
