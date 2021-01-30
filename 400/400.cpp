#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;

vector<string> L;
bool sortL(string a,string b){return(a<b);}

int main()
{
 int nf,i,j,k,element;
 int r,c;
 int w=60;
 int cw,cl,nc,nr;
 int max,pos;
 string filename;
 char lineout[61];

 freopen("400.in","r",stdin);

 while(cin>>nf)
 {

     max=0;
     L.erase(L.begin(),L.end());
     for(i=0;i<nf;i++){
      cin>>filename;
    //  cout<<filename.size()<<endl;
      if(filename.size()>60)filename.erase(60,filename.size()-60);
    //  cout<<filename.size()<<endl;
      L.push_back(filename);
      if(filename.size()>max)max=filename.size();
     }
     sort(L.begin(),L.end(),sortL);

     cw=max;
     nc=1;
     if((cw+2)<=60)nc=60/(cw+2);
     nr=nf/nc;
     if(nf%nc!=0)nr++;
   //  cout<<"width: "<<cw<<" nc: "<<nc<<" nr: "<<nr<<" nf: "<<nf<<endl;

     for(i=0;i<60;i++)
      cout<<"-";
     cout<<endl;

     for(r=0;r<nr;r++){
       for(i=0;i<60;i++)lineout[i]=' ';

      for(c=0;c<nc;c++){
        pos=c*(cw+2);
        element=r+c*nr;
        if(element<L.size())
        for(k=0;k<L[element].size();k++)
         lineout[pos++]=L[element][k];

       }
      lineout[60]='\0';
      cout<<lineout<<endl;
    }//end row output

 }

return 0;
}


