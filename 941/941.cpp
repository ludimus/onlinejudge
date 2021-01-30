#include <iostream>
#include <string>

using namespace std;

int SOL[20];
char SSOL[20];
unsigned long long P[20];


void initP()
{
     int i;
     P[19]=0;
     P[18]=1;
     for(i=17;i>=0;i--)
     {
      P[i]=(19-i)*P[i+1];
    //  cout<<"P["<<i<<"] "<<P[i]<<endl;
      }
 
}


void initsol()
{
 int i;
     for(i=0;i<20;i++)
        SOL[i]=i+1;
 
}
 
int firstfree(int n)
{
    int i,j,ret,found;
 
    ret=0;   
    for(i=1;i<=20;i++){
       found=0;              
       for(j=0;j<n;j++)
         if (SOL[j]==i) {found=1;j=n;}
       if(found==0){ret=i;i=20;}
       }
       //cout<<"inserting: "<<ret<<endl;;
return ret;
}        
 
void fillsol(int n)
{
int i;
   for (i=n;i<20;i++)
      SOL[i]=firstfree(i);
 
 
}    
 


void unrank(unsigned long long perm)
{
  int i;
  int pos;
  int swapoffset;
 
      if(perm==0){
      //  for(i=0;i<20;i++)
       //     cout<<SOL[i]<<" ";
       //     cout<<endl<<endl;
            }
      else{
           pos=0;
           while(perm<P[pos])
            pos++;
          // cout<<"p:"<<perm<< " " <<P[pos] << " changing pos: "<< pos<<endl;
           swapoffset=(perm-P[pos])/P[pos];
           swapoffset+=1;
          // cout<< "swapping with pos: "<<pos+swapoffset<<" " <<swapoffset<<endl;
           SOL[pos]=SOL[swapoffset+pos];
           perm=perm-(swapoffset*P[pos]);
          // cout<<"permleft : "<<perm<<endl;
           fillsol(pos+1);
           unrank(perm);
           }
}





int main()
{
 int nc,i,j,k;
 char temp;
 unsigned long long perm;
 string S;
 
 initP();
 freopen("941.in","r",stdin);
 cin>>nc;
 while(nc--)
  {
    initsol();
    cin>>S>>perm;
    j=S.size();
    
    // sort inputstring
    for(i=0;i<j-1;i++)
     for(k=0;k<(j-1-i);k++)
       if (S[k]>S[k+1]){
          temp=S[k];
          S[k]=S[k+1];
          S[k+1]=temp;
          }           
    
    //put inputstring in last 20 bytes of the solution array   
    k=0;
    for(i=j;i>0;i--){
    SSOL[20-i+1]=S[k++];
 //   cout<< SSOL[20-i+1];
    }
    
    //unrank permutation, work with integer array;
    unrank(perm);
    
    //map integer solution on inputstring char solution array
    for(i=j;i>0;i--){
    cout<< SSOL[SOL[20-i]];
    }
    cout<<endl;
    //cout<<S<<S.size()<<perm;
  } 
   

    return 0;
}
