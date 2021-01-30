#include <iostream>

using namespace std;

int main()
{
int nc,c,i,max;

string L[10];
int V[10];

cin>>nc;
c=0;
while(nc--)
{
  c++;
  max=0;
  for(i=0;i<10;i++)
  {
    cin>>L[i];
    cin>>V[i];
    if(V[i]>max)max=V[i];
   } 
  cout<<"Case #"<<c<<":"<<endl;
  for(i=0;i<10;i++)
   if(V[i]==max) cout<<L[i]<<endl; 
 }  

return 0;
}
