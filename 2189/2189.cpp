#include <iostream>

using namespace std;

int main ()
{
int casenr,n,t,counter;
unsigned  long cn,ln,fn;



  freopen("2189.in", "r", stdin);
  casenr=1;
  cin>>n;
  while(n!=0)
  {
   cout<< "Case "<<casenr++<<":"<<endl;
   t=n;
   while(t>0)
   {
    t--;
    cin>> cn;
    if((t+1)==n){fn=cn;ln=cn;counter=0;}
    if ((cn-ln)==1)counter++;
    if (((cn-ln)>1) || (t==0))
     {
      
      cout<<"0"<< fn<<" "<< counter<< " "<<t <<endl;
      counter=0;
      fn=cn;
     }
    
    cout<<"Debug : cn :" <<cn<<" ln :" <<ln<< " fn :"<<fn<<" t:" <<t<<endl;
    ln=cn;   
   }
   cin>>n;
  }  
  
    return 0;
}
