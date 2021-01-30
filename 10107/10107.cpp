#include <iostream>
#include <vector>
using namespace std;


vector<int> L;
vector<int>::iterator it;

int main()
{
    int n,i;
    cin>>n;
    cout<<n<<endl;
    L.push_back(n);
    while(cin>>n)
    {
        it=L.begin();
        i=0;
        while(L[i]<n && i<L.size())i++;
        L.insert(it+i,n);
      //  for(i=0;i<L.size();i++)
      //  cout<< L[i] <<"-";
        if(L.size()%2==1)cout<<L[ L.size()/2 ]<<endl;
        else cout<<(L[ L.size()/2]  +L[L.size()/2 -1])/2<<endl;


    }

  return 0;
}
