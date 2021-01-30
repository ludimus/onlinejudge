#include <iostream>
#include <cstdio>

using namespace std;

 int main()
{
    signed int r,n,i;


    while (cin>>n){
      r=0;

      cout<<n;

      for(i=0;i<4;i++)
      {

        r=r<<8;

        r+=n&0x000000FF;

        n=n>>8;

      }

      cout<<" converts to "<<r<<endl;
    };


    return 0;

}
