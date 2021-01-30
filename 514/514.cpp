#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

    stack<int> T;
    stack<int> S;


void initsim()
{
    while(!T.empty()) T.pop();
    while(!S.empty()) S.pop();

}

void getwagon (int i)
{
       if((S.empty())&&(T.empty()));
  else if((S.empty())&&(!T.empty())){S.push(T.top());T.pop();getwagon(i);}
  else if((S.top()!=i)&&(!T.empty())){S.push(T.top());T.pop();getwagon(i);}
  else if(S.top()==i)S.pop();


}


int main()
{
    int i;
    int tl;
    int wagonnr;
    int nrtrains=0;

    freopen("514.in","r",stdin);
    cin>>tl;
    while(tl>0)
    {
      //  nrtrains++;
        cin>>wagonnr;
        while(wagonnr>0)
        {
          //start simulation
          initsim();
          // attach wagonsto train;
          for(i=tl;i>0;i--)
          T.push(i);

            getwagon(wagonnr);
            for(i=1;i<tl;i++){
                cin>>wagonnr;
                getwagon(wagonnr);

             }
             if((T.empty())&&(S.empty()))
              cout<<"Yes"<<endl;
             else
              cout<<"No"<<endl;
           cin>>wagonnr;
        }




        // read new train length
     cin>>tl;
     cout<<endl;
    }


}
