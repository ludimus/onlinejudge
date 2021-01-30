#include <iostream>
#include <string>

using namespace std;
string GROUP[10];
string R[10];
int money[10];


int main(){
    
 int g,gs,i,j,k,tot,np,ng;
 string giver,receiver;
 
 
 ng=0; 
 while(cin>>g)
 {
   gs=g;
   ng++;
    for(i=0;i<gs;i++){
     cin>>GROUP[i];
     money[i]=0;
    }
    
    
    for(i=0;i<gs;i++)
    {
     cin>>giver>>tot>>np;
     
     if(np>0)
     for(j=0;j<gs;j++)
      if(GROUP[j]==giver)money[j]+=(tot%np)-tot;
     
      
     //cout<<"2"<<endl;
    
     for(j=0;j<np;j++)
     {
      cin>>receiver;
      //cout<<"3"<<endl;
      for(k=0;k<gs;k++)
       if(GROUP[k]==receiver)money[k]+=tot/np;
     }
    
    }
    
    if(ng>1)cout<<endl;
    
    for(i=0;i<gs;i++)
     cout<<GROUP[i]<<" "<< money[i]<<endl;
    
   
   
   
   
 }             
                        
    
    
return 0;    
}
