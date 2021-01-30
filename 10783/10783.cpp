#include <iostream>

using namespace std;

int main()
{
  int nc;
  int a,b;
  int c=1;
  int sum;
  cin>>nc;
  
  while(nc--)
  {
   cin>>a>>b;
   sum=0;
   if ((a%2)==0)a++;
   if ((b%2)==0)b--;
   if(a<=b)sum=((a+b)/2)*(((b-a)/2)+1) ;
           
   cout<<"Case "<<c++<<": "<<sum<<endl;
  } 
 return 0;   
}
