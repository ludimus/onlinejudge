#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
vector<char> L;

int main()

{
    int n,i,ng;
    string line;

   // freopen("11192.in","r",stdin);
    cin>>ng;
    while (ng>0)
    {
        L.clear();
        cin>>line;
        n=line.size()/ng;
        for(i=0;i<line.size();i++)
          L.push_back(line[i]);

        for(i=0;i<ng*n;i+=n)
        reverse(L.begin()+i,L.begin()+i+n);

        for(i=0;i<L.size();i++)
        cout<<L[i];
        cout<<endl;
        cin>>ng;
    }
    return 0;
}
