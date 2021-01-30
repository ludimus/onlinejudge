#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
string C[2000];
int N[2000];
 
 
 
void initlists()
{
     int i;
 
     for(i=0;i<2000;i++){
       N[i]=0;
       C[i]="";
       }
 
}
 
 
 
 
 
int main()
{
int nc,i,l,k;
int dif,itemp;
char S[75];
char country[75];
string temp;
 
//freopen("10420.in2","r",stdin);
initlists();
 
cin>>nc;

cin.getline(S,75,'\n');       //read eoln from nc
dif=0;
while(nc--)
{
 
    cin.getline(S,75,'\n');
    i=0;     
   
    //strip countryname
    l=strlen(S);
    while ((S[i]!=' ')&&(i<l))
         {
          country[i]=S[i];
          i++;
          }
    country[i]='\0';
//  cout<<country<<endl;
    // insert country in list and update count
    for(i=0;i<dif;i++)
      if(C[i]==country){
           N[i]++;
          // cout<<C[i]<<"++"<<endl;
           i=dif+1;
 
           }
    if(i==dif){
       dif++;
       C[i]=country;
       N[i]++;
    //   cout<<"inserted :"<<C[i]<<endl;
    }     
 
}
 
//print unsorted list;
 
//for(i=0;i<dif;i++)
//    cout<<C[i]<<" "<<N[i]<<endl;
 
//cout<<endl;
 
// sort Country list
 
l=dif-1;
for(k=0;k<(dif-1);k++)
 {
     for(i=0;i<l;i++)
     {
                  // cout<<"comparing "<<C[i]<<" with "<<C[i+1]<<endl;
                   if(C[i]>C[i+1])
                   {
                  //  cout<<"swapping "<<C[i]<<" with "<<C[i+1]<<endl;
                    temp=C[i+1];
                    C[i+1]=C[i];
                    C[i]=temp;
 
                    itemp=N[i+1];
                    N[i+1]=N[i];
                    N[i]=itemp;
                   }                        
     }
     l--;
  }
  
 
//print sorted list;
 
for(i=0;i<dif;i++)
     cout<<C[i]<<" "<<N[i]<<endl;

return 0;
 
}
