#include <iostream>

using namespace std;

int main()
{
    int i,p,n;
    
cin>>p;
for(i=0;i<p;i++){
    cin>>n;
    n= (((n*63)+7492)*5)-498;       
    n%=100;
    n/=10;
    if(n<0)n*=-1;
    cout <<n<<endl;
}
    
    return 0;
}
