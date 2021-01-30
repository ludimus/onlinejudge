#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

struct DNAset{
    int sortval;
    string DNAline;
};


vector<DNAset> DNA;

bool sortdna(DNAset a,DNAset b){return(a.sortval<b.sortval);}


int computesortval(string DNAline){

 int l,i,j,ret=0;
 l=DNAline.size();

 for(i=0;i<l-1;i++)
  for(j=i+1;j<l;j++){
  //cout<<"comparing "<<DNAline[i]<<DNAline[j]<<endl;
  if(DNAline[i]>DNAline[j])ret++;
  }

 //cout<<"sorted :"<<DNAline<<" value: "<<ret<<endl;
 return ret;

}


int main()
{
    int nc,i;
    int dnalen;
    int nsets;
    DNAset D;
    string DNAline;

   // freopen("612.in","r",stdin);
    cin>>nc;
    while(nc--)
    {
        DNA.clear();
        cin>>dnalen>>nsets;
        while(nsets--){
         cin>>DNAline;
         D.DNAline=DNAline;
         D.sortval=computesortval(DNAline);
         DNA.push_back(D);
        }
        stable_sort(DNA.begin(),DNA.end(),sortdna);
        for(i=0;i<DNA.size();i++)
        cout<<DNA[i].DNAline<<endl;
        if(nc>0)cout<<endl;
    }

    return 0;
}
