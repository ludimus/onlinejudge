#include <iostream>

using namespace std;

int f (int a)
{
    if(a==1) return 1;
    else
       if((a%2)==0) return (a/2);
       else {
              a-=1;
             a/=2;
             return(f(a) +f(a+1));
             }
}             
    


int main()
{
 int n;
 
 cin>>n;
 while(n!=-1)
 {
  if(n>0) cout<<"f("<<n<<") = "<<f(n)<<endl<<endl;
  
  cin>>n;
 }            
     
 return (0);   
}
