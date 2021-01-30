#include <iostream>

using namespace std;


unsigned long long reverse(unsigned long long n)
{
 unsigned long long ret=0;
  
 while(n>0){
     ret*=10;               
     ret+=n%10;
     n/=10;
     }
 return ret;           
}        


int main()
{
 
 unsigned long long  n;
 unsigned long long  r;
 
 int nc,i;;
 
 cin>>nc;
 while(nc--)
 {
  i=0;
  cin>>n;
  r=reverse(n);
  //cout<<n<<"  "<<reverse(n)<<endl;
  while(n!=r)
  {
    n=n+r;
    r=reverse(n);
    i++;
  }          
    
 cout<<i<<" "<<n<<endl;   
 }   
return 0;    
}
