#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

char deck[52][2];

using namespace std;

int main(){

char line[100];
int l,i;

freopen("127.ino","r",stdin);

cin.getline(line,100);

if(line[0]!='#')
{
  l=0;
  for(i=0;i<26;i++){
   deck[i][0]=line[l];
   deck[i][1]=line[l+1];
   l+=3;
  }
  l=0;
  cin.getline(line,100);
  for(i=26;i<52;i++){
   deck[i][0]=line[l];
   deck[i][1]=line[l+1];
   l+=3;
  }
}
for(i=0;i<52;i++)
cout<<deck[i][0]<<deck[i][1]<<endl;

return 0;
}
