#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

struct employee{

    string title;
    string fname;
    string lname;
    string dep;
    string address;
    string hphone;
    string wphone;
    string box;

};

vector<employee> BB;

bool sortfname(employee a,employee b){return(a.fname<b.fname);}
bool sortlname(employee a,employee b){return(a.lname<b.lname);}


int main()
{

    int nc,i;
    employee E;
    char edata[256];
    char dep[256];
    char * cp;

   // freopen("450.in","r",stdin);
    cin>>nc;
    cin.getline(edata,256);       // read eol;
    cin.getline(dep,256);

    while(cin.getline(edata,256))
    {
      if(strlen(edata)==0)cin.getline(dep,256); // read department after empty string.
      else
      {
       E.dep=dep;
       cp=strtok(edata,",");
       E.title=cp;
       cp=strtok(NULL,",");
       E.fname=cp;
       cp=strtok(NULL,",");
       E.lname=cp;
       cp=strtok(NULL,",");
       E.address=cp;
       cp=strtok(NULL,",");
       E.hphone=cp;
       cp=strtok(NULL,",");
       E.wphone=cp;
       cp=strtok(NULL,",");
       E.box=cp;
      BB.push_back(E);
      }


    }
   // stable_sort(BB.begin(),BB.end(),sortfname);
    stable_sort(BB.begin(),BB.end(),sortlname);
    for(i=0;i<BB.size();i++)
    {
        cout<<"----------------------------------------"<<endl;
        cout<<BB[i].title<<" "<<BB[i].fname<<" "<<BB[i].lname<<endl;
        cout<<BB[i].address<<endl;
        cout<<"Department: "<<BB[i].dep<<endl;
        cout<<"Home Phone: "<<BB[i].hphone<<endl;
        cout<<"Work Phone: "<<BB[i].wphone<<endl;
        cout<<"Campus Box: "<<BB[i].box<<endl;

    }

    return 0;
}
