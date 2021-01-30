#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int d,n,l,steps;

    while(cin>>n)
    {
        d=11;
        steps=2;
        while(d<n){
        d=d*10+1;
        steps++;
        }
        while(d%n!=0){
        l=d%n;
        d=l*10+1;
        steps++;
        }
    cout<<steps<<endl;
    }
    return 0;
}
