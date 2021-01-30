#include <iostream>
#include <cstring>
#include <stack>
#include <cstdio>

using namespace std;

int main()
{
 int nc;
 int i;
 char L[1024];
 stack<char> S;
 bool error;

freopen("673.in","r",stdin);
cin>>nc;
cin.getline(L,1024);//reead eoln from nc;

while(nc--)
 {
  cin.getline(L,1024);
  //cout<<"string :"<<L<<" " <<strlen(L)<<endl;
  while(!S.empty())S.pop();

  for(i=0;i<strlen(L);i++)
   {

    if(L[i]=='(')S.push('(');
    if(L[i]=='[')S.push('[');
    if((L[i]==']')&&(S.empty()))S.push('e');
    if((L[i]==')')&&(S.empty()))S.push('e');
    if((L[i]==']')&&(!S.empty())&&(S.top()=='['))S.pop();
    if((L[i]==')')&&(!S.empty())&&(S.top()=='('))S.pop();
    }

  if(S.empty())
    cout <<"Yes"<<endl;
  else
    cout <<"No"<<endl;
 }


return 0;
}
