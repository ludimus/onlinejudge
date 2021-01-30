#include <iostream>
#include <map>
#include <vector>
#include <cstdio>

using namespace std;

vector<int> order;
map<int,int> L;

int main()
{
 int n,i;

 freopen("484.in","r",stdin);
 while(cin>>n){
     L[n]++;
 if(L[n]==1)order.push_back(n);
 }

 for(i=0;i<order.size();i++)
   cout<<order[i]<<" "<<L[order[i]]<<endl;
return 0;
}
