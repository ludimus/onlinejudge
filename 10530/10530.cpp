#include <iostream>
#include <cstdio>
#include <stack>
#include <string>


using namespace std;




int main()
{
    string answer;
    bool ishonest;
    int g, number,i=0;

    stack<int> H;
    stack<int> L;
    freopen("10530.in","r",stdin);
    cin>>g;
    while(g>0)
    {
        cin>>answer;
        cin>>answer;
      //  cout<<g<<" "<<answer<<endl;
        if(!answer.find("high"))H.push(g);
        if(!answer.find("low"))L.push(g);
        if(!answer.find("on")){
            ishonest=true;
            number=g;
            while(!H.empty()){
             if(H.top()<=number)ishonest=false;
             H.pop();
             }
            while(!L.empty()){
             if(L.top()>=number)ishonest=false;
             L.pop();
             }
            if (ishonest) cout<<"Stan may be honest"<<endl;
            else cout<<"Stan is dishonest"<<endl;

        }
        cin>>g;


    }

    return 0;
}
