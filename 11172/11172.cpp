#include <iostream>

using namespace std;

int main()
{
    int nc;
    unsigned long long a,b;
    
    cin>>nc;
    while(nc--)
    {
     cin>>a>>b;
     if(a>b) cout<<">"<<endl;
     if(a<b) cout<<"<"<<endl;
     if(a==b) cout<<"="<<endl;
     }
}          
