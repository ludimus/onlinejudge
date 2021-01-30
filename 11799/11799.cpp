#include <iostream>

using namespace std;

int main(){
    
 int nc;
 int ns,cs,max;
 int c;
 
 cin>>nc;
 c=1;
 
 while(nc--)
 {
   cin>>ns;
   max=0;
  
   while(ns--)
   {
    cin>>cs;
    if(cs>max) max=cs;
    //cout<<"student :"<<cs<<" "<<max<<endl;
   }
   cout<<"Case "<<c++<<": "<<max<<endl;
 }             
                        
    
    
return 0;    
}
