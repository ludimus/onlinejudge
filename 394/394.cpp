#include <iostream>
#include <string>

using namespace std;


int D[10];


class Adata {
  public:
       string name;
       int baddr;
       int esize;
       int ndim;
       int lbound[10];
       int ubound[10];
       int nume[10];
       
       int get_nrdim(){
           return ndim;
           }
       
       int get_addr(int n){
        int i;
        int addr;
        int tote;
        
        addr= baddr;
        tote=0;
        for(i=n;i>0;i--)
        {
          if(i==ndim)nume[i-1]=ubound[i-1]-lbound[i-1]+1;
          else nume[i-1]=nume[i]*(ubound[i-1]-lbound[i-1]+1);
          //cout<<endl<< "nume : "<< i-1<<": "<<nume[i-1]<<endl;
         }
         
        for(i=0;i<n-1;i++) {
          tote+=(D[i]-lbound[i])*nume[i+1];
        //  cout<<"level: "<<i<<" tote :"<<tote<<endl;
          }
          tote+=D[i]-lbound[i];
       return addr+tote*esize;
       }
};




int main()
{
 int NA,NR;

 int i,j,d,ndim,n;
 string carray;
 Adata A[10000];
  
 freopen("394.in","r",stdin);
 
 cin>>NA>>NR;
 //scan input array 
 i=0;
 n=NA;
 while(n--)
 {
   cin>>A[i].name;
   cin>>A[i].baddr;
   cin>>A[i].esize;
   cin>>ndim;
   A[i].ndim=ndim;
   d=0;
   while(ndim--)
   {
    cin>>A[i].lbound[d]>>A[i].ubound[d];
    d++; 
   }
 i++;
 }
 while(NR--)
 {
   cin>>carray;
   for(i=0;i<NA;i++)
    if(carray==A[i].name)
    {
      cout<<A[i].name<<"[";
      for(j=0;j<A[i].get_nrdim();j++){
                                      
        cin>> D[j];
        if(j==0) cout<<D[j];
        else cout<<", "<<D[j];
        }                                
      
      cout<<"] = "<<A[i].get_addr(j)<<endl;
      i=NA;
    }           
    //else cout<<"meeee"<<endl;



}
   
            
 
 
 return 0;   
}
