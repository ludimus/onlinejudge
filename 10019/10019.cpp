#include <iostream>

using namespace std;

int hextodec(int n)
{
 int ret;
 int fac=16;
 
 ret=n%10;
 while(n>0)
  {
   n/=10;
   ret+=fac*(n%10);
   fac*=16;
 }
return ret;
}


int countones(int n)
{
 int ret=0;
 
 while(n>0)
 {
  if((n%2)==1)ret++;
  n=n>>1;   
 }
return ret;
}        


int main()
{
 int n,M;
 cin>>n;
 while(n--)
 {
  cin>>M;
  cout<<countones(M);
  cout<<" "<<countones(hextodec(M))<<endl;
}          
 
 
 return 0;   
}
