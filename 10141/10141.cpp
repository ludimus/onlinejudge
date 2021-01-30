#include <iostream>
#include <string>

using namespace std;

int main()
{
 int nr,np;
 int rfp=0;
 int i,j,nrmet,maxmet;
 double price,bestprice;
 
 string req;
 string rfpname;
 string dummy;
 string bestvendor;
 
 //freopen("10141.in","r",stdin);
    
 cin>>nr>>np;
 //cout<<nr<<" "<< np<<endl;
 getline(cin,dummy);
 while ((nr!=0)||(np!=0))
  {
       rfp++;
       
       
       maxmet=-1;
       for(i=0;i<nr;i++){
           getline(cin,req);
       //    cout<<"basereq: "<<req<<endl;
           }
         
       
       
       for(j=0;j<np;j++)
       {
          
       
          getline(cin,rfpname);
          cin>>price;
          cin>>nrmet;
          getline(cin,dummy);
        //  cout<<rfpname;
        //  cout<<fixed<<price;
        //  cout<<nrmet<<endl;
          
          for(i=0;i<nrmet;i++){
            getline(cin,req);
          //  cout<<"metreq: "<< req <<endl;
            }  
           if(nrmet>maxmet){
             bestvendor=rfpname;
             bestprice=price;
             maxmet=nrmet;
             }
           if((nrmet==maxmet)&& (price<bestprice)){
             bestvendor=rfpname;
             bestprice=price;
             maxmet=nrmet;
             }                                 
           
                
        } 
   if(rfp>1)cout<<endl;     
   cout<<"RFP #"<<rfp<<endl;
   cout<<bestvendor<<endl;
      
         
   cin>>nr>>np;
   //cout<<nr<<" "<< np<<endl;
   getline(cin,dummy);     
  }                     
 return 0;   
}
    
    
