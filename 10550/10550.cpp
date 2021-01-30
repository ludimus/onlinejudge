#include <iostream>

using namespace std;

int main()
{
 int a,b,c,d;
 int deg;
 
 cin>>a>>b>>c>>d;
 while((a>0)||(b>0)||(c>0)||(d>0))
 {
 deg=80;
 if(a>b) deg+=(a-b);
 else  deg+=(a+40-b);
  //cout<<deg<<endl;
 deg+=40;
  //cout<<deg<<endl;
 if(c>b) deg+=(c-b);
 else deg+=(c+40-b);
  //cout<<deg<<endl;
 if(c>d) deg+=(c-d);
 else deg+=(c+40-d);
  //cout<<deg<<endl;
 deg*=9;
 cout<<deg<<endl;
 cin>>a>>b>>c>>d;
 }
    
return 0;    
}
