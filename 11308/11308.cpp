#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

struct recstr{
  string receiptname;
  int costs;
};

map<string,int> I;
vector<recstr> R;

bool sortreceiptcosts(recstr a, recstr b){return(a.costs<b.costs);}
bool sortreceiptnames(recstr a, recstr b){return(a.receiptname<b.receiptname);}


string caps(string line){

int i;

for(i=0;i<line.size();i++)
 if((line[i]>='a')&&(line[i]<='z'))line[i]-=32;

 return line;

}

int main()
{

    char bindertitle[1000];
    char dummy[1000];
    string ingredient;
    string receiptname;
    string binder;
    int receiptcosts;
    int costs;
    int ningredients;
    int nreceipts;
    int budget;
    int n,i,nb;
    recstr receipt;

  //  freopen("11308.in","r",stdin);
    cin>>nb;
    gets(dummy);//eoln;
    while(nb--)
    {
        R.clear();
        I.clear();
        gets(bindertitle);
        binder=bindertitle;
        cout<<caps(binder)<<endl;
        cin>>ningredients>>nreceipts>>budget;
        gets(dummy);
        while(ningredients--)
        {
            cin>>ingredient>>costs;
            I[ingredient]=costs;
            //cout<<ingredient;

        }
        gets(dummy);
        while(nreceipts>0)
        {
          gets(dummy);
         // cout<<dummy;
          receipt.receiptname=dummy;
          receiptcosts=0;
          cin>>ningredients;
         // cout<<"eee"<<ningredients<<endl;
          gets(dummy);
          while(ningredients>0)
          {
            cin>>ingredient>>n;
            receiptcosts+=I[ingredient]*n;
            ningredients--;
           // cout<<ingredient<<n<<ningredients<<endl;
          }
          receipt.costs=receiptcosts;
          if(receiptcosts<=budget) R.push_back(receipt);
          nreceipts--;
          gets(dummy);
        }

        stable_sort(R.begin(),R.end(),sortreceiptnames);
        stable_sort(R.begin(),R.end(),sortreceiptcosts);
        for(i=0;i<R.size();i++)
          cout<<R[i].receiptname<<endl;
        if(R.size()==0)cout<<"Too expensive!"<<endl;
        cout<<endl;
    }



    return 0;
}


