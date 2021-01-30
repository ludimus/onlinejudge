#include <iostream>

using namespace std;

int main()
{
  int cnp,np;
  int sheet;
  int sf1,sf2,sb1,sb2;
  int high,low;
  
  cin>>np;
  while(np>0)
  {
   cnp=(np+3)/4;
   cnp*=4;
   high=cnp;
   low=1;
   sheet=1;
   cout<<"Printing order for "<<np<<" pages:"<<endl;
   while(cnp>0)
    {
      sf1=high--;
      sf2=low++;
      sb1=low++;
      sb2=high--;
      if((sf1<=np)||(sf2<=np)){
        cout<<"Sheet "<<sheet<<", front: ";
        if(sf1<=np) cout<<sf1<<", ";else cout<<"Blank, ";
        if(sf2<=np) cout<<sf2<<endl;else cout<<"Blank"<<endl;
        }  
      if((sb1<=np)||(sb2<=np)){
        cout<<"Sheet "<<sheet<<", back : ";
        if(sb1<=np) cout<<sb1<<", ";else cout<<"Blank, ";
        if(sb2<=np) cout<<sb2<<endl;else cout<<"Blank"<<endl;                    
        }
      cnp-=4;
      sheet++;
      
     }        
             
             
  cin>>np;           
  }          
    
return 0;    
}
