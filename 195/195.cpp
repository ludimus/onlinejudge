#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstring>

using namespace std;
struct pair{
     char c;
     int val;
}
vector<char> S;

bool sortline(pair a,pair b){return(a.val<b.val);}


int main(){

int nc,i;
char line[122];

  freopen("195","r",stdin);
  cin>>nc;
  cin.getline(line,12); //read eoln;
  while(nc--)
  {
    S.clear();
    cin.getline(line,122);
    for(i=0;i<strlen(line);i++)
     S.push_back(line[i]);
    sort(S.begin(),S.end(),sortline);
    do {
    for(i=0;i<strlen(line);i++)
      cout << S[i];
      cout<<endl;
  } while ( next_permutation (S.begin(),S.end()) );
   //cout<<endl;

  }


}
