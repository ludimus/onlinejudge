#include <iostream>

using namespace std;

int main()
{
int a,b,c,d;

a=0;b=0;c=1;d=1;

cout<<"a=0,b=0,c=1,d=1"<<endl<<endl;
cout<<"a==b :"<<(a==b)<<endl;
cout<<"a==c :"<<(a==c)<<endl;
cout<<"a!=0 :"<<(a!=0)<<endl;

cout<<"(a!=0)&&(b!=0) :" <<((a!=0)&&(b!=0))<<endl;
cout<<"(c!=0)&&(d!=0) :" <<((c!=0)&&(d!=0))<<endl;
cout<<"(a!=0)&&(c!=0) :" <<((a!=0)&&(c!=0))<<endl;

cout<<endl;

cout<<"(a!=0)||(b!=0) :" <<((a!=0)||(b!=0))<<endl;
cout<<"(c!=0)||(d!=0) :" <<((c!=0)||(d!=0))<<endl;
cout<<"(a!=0)||(c!=0) :" <<((a!=0)||(c!=0))<<endl;

return 0;
}
