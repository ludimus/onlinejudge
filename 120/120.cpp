#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char L[120];
int S[30];

int main()
{
    int n;
    freopen("120.in","r",stdin);
    while(cin.getline(L,120))
    {
      //while(strlen(L)>0){
         sscanf(L,"%d",&n);
         cout<<n<<" "<<L;
      //}
      cout<<endl;
    }



return 0;
}
