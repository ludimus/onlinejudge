#include <iostream>

using namespace std;

int f(int n)
{
int ret;
      
      if(n<10) return n;
      else{
        ret=n%10;
        while(n>=10){
             n/=10;
             ret+=n%10;
             }
       return f(ret);
       }       
}


int main()
{
    int n;
    unsigned long long a,b;
    
    cin>>n;
    while(n>0){
     cout<<f(n)<<endl;
     cin>>n;
     }
     
} 
