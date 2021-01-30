#include <iostream>

using namespace std;

int L[200];

int calc(int full,int borrow)
{

 int ret=0;
 int w;
 int empty=borrow;
 
   while((full+empty)>2){
       ret+=full;
       w=full+empty;
       full=w/3;
       empty=w%3;
       }
       ret+=full;
       empty=full+empty-borrow;
       if(empty<0) ret=0;
       return ret;;        
}


int main()
{
   int nb;
   //int i;
   //int a,b,c;
   
   while(cin>>nb) cout<<calc(nb,1)<<endl;
   
   
   //for(i=1;i<201;i++){
   //   a=calc(i,0);
   //   b=calc(i,1);
   //   c=calc(i,2);
   //cout<<i<<": "<<a<<" "<<b<<" "<<c<<endl;

}    
