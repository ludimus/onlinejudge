#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

struct modpair{

unsigned long long pow;
unsigned long long mod;
};


vector<modpair> L;


void buildmodlist(int base,int power, int modulo){

     unsigned long long pow=1;
     int l=1;
     modpair mp;

     // clear list
     L.erase(L.begin(),L.end());

     // insert first element
     mp.pow=pow;
     mp.mod=base%modulo;
     L.push_back(mp);
     pow+=pow;

     // insert elements
     while(pow<power){
       mp.pow=pow;
       mp.mod=(L[l-1].mod*L[l-1].mod)%modulo;
       L.push_back(mp);
     //  cout<<"added "<<L[l].pow<<" "<<L[l].mod<<endl;
       l++;
       pow+=pow;

     }
     //insert last element;
     mp.pow=pow;
       mp.mod=(L[l-1].mod*L[l-1].mod)%modulo;
       L.push_back(mp);

}

unsigned long long getmod(int power,int modulo)
{
    int i=0;
    while(L[i+1].pow<=power)i++;
  //  cout<<"power :"<<power<<"index :"<<i<<endl;
    if(L[i].pow==power)
        return (L[i].mod);
    else
        return (L[i].mod*getmod(power-L[i].pow,modulo))%modulo;

}


void printmodlist()
{
    int i;

    for(i=0;i<L.size();i++)
    cout<<i<<" "<<L[i].pow<<" "<<L[i].mod<<endl;
}

int main()
{
     int B,P,M;


     freopen("374.in","r",stdin);
     while(cin>>B){
       cin>>P>>M;

       buildmodlist(B,P,M);
    //   printmodlist();
       if(P==0)cout<<"1"<<endl;
       else cout<<getmod(P,M)<<endl;

     }

return 0;
}
