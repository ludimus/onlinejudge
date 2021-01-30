#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> L;


void printlist()
{

    int i;
    for(i=0;i<L.size();i++)
    cout<<L[i]<<" ";
    cout<<endl;
}

int main()
{
    int m;
    int n,i,pos;
    int city_left;

    freopen("440.in","r",stdin);
    cin>>n;
    while(n>0)
    {

     m=2;
     city_left=0;
     while (city_left!=2)
     {
      L.erase(L.begin(),L.end());

      for(i=1;i<=n;i++)
       L.push_back(i);

       pos=0;
       L.erase(L.begin());
       while(L.size()>1){
         pos=(pos+m-1)%L.size();
      //   cout<<"deleting: "<<L[pos] <<" | ";
        // printlist();
         L.erase(L.begin()+pos);
       }
       city_left=L[0];
       if(city_left==2)cout<<m<<endl;
       else m++;
     }
    cin>>n;

    }

    return 0;
}
