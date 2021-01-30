#include <iostream>

using namespace std;

int main()
{
int nc,i,x,y,r;

freopen ("11044.in","r",stdin);

cin>>nc;

for (i=0;i<nc;i++)
{
    cin>>x>>y;
    x-=2;
    y-=2;
    if((x%3)==0) x/=3;
     else x=(x/3)+1;
    if((y%3)==0) y/=3;
     else y=(y/3)+1;
    
    cout << (x*y) << endl; 
}     

    return 0;
}
