#include <iostream>
#include <cstdio>
#include <set>
#include <string>

using namespace std;
set<string> L;


int main()
{

    string line;
    int l,i;
    int mirror;
    int numpalin;

  //  freopen("353.in","r",stdin);

    while(cin>>line)
    {

        L.clear();
        numpalin=0;
        mirror=1;
        l=line.size();

        //add single chars to palin set;
        for(i=0;i<l;i++)
         L.insert(line.substr(i,1));

        // add odd palindromes
        while(mirror<l){
        i=1;
        while(((mirror-i)>=0)&&((mirror+i)<l)&& (line[mirror-i]==line[mirror+i])){
              L.insert(line.substr((mirror-i),(2*i)+1));
           //   cout<<"adding :"<<line.substr((mirror-i),(2*i)+1)<<endl;
              i++;
        }
        mirror++;
        }

        // add even palindromes
        mirror=0;
        while(mirror<l-i){
        i=1;
        while(((mirror-i+1)>=0)&&((mirror+i)<l)&&(line[mirror-i+1]==line[mirror+i])){
              L.insert(line.substr((mirror-i+1),(2*i)));
           //   cout<<"adding :"<<line.substr((mirror-i+1),(2*i))<<endl;
              i++;
        }
        mirror++;
        }
        cout<<"The string '"<<line<<"' contains "<<L.size()<<" palindromes."<<endl;
        line.clear();


    }



    return 0;

}
