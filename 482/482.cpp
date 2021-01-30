#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

struct element{
    int i;
    string num;

};


vector<element> L;


bool sortL(element a, element b){return(a.i<b.i);}


int main()
{

    int nc,i,l;
    char line1[1000000];
    char line2[1000000];
    char * pi;
    char * pnum;
    element E;

    freopen("482.in","r",stdin);
    cin>>nc;
    cin.getline(line1,1024); //read eoln;
    while(nc--)
    {
        L.clear();
        cin.getline(line1,1000000); //read empty line
        cin.getline(line1,1000000); //read l1;
        cin.getline(line2,1000000); //read l2;

        l=0;
        pi = strtok(line1," ");
        while (pi != NULL)
            {
                l++;
                E.i=atoi(pi);
                L.push_back(E);
                pi = strtok (NULL," ");

                //pnum = strtok (NULL," ");

            }
        i=0;
        pnum = strtok(line2," ");
        while (l--)
            {
                L[i++].num=pnum;
                pnum = strtok (NULL," ");
            }
        sort(L.begin(),L.end(),sortL);

        for(i=0;i<L.size();i++)
          cout<<L[i].num<<endl;
        if(nc>0)cout<<endl;

    }




    return 0;

}


