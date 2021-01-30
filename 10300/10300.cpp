#include <iostream>

using namespace std;

int main()
{
 int nc,nl;
 unsigned long long a,b,c,tot;
 
 freopen ("10300.in","r",stdin);
 
 cin>>nc;
 while(nc--)
 {
    cin>>nl;
    tot=0;
    while(nl--)
    {
      cin>>a>>b>>c;
      tot+=a*c;
    }
    cout<<tot<<endl;          
 
}
 
 return 0;   
}
