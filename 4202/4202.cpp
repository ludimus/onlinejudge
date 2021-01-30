#include <iostream>

using namespace std;

int main()
{
 freopen ("4202.in","r", stdin);
 
 int nc,hit,m;
 char h0,h1,m0,m1,semi;
 
 int wtimestart,wtimeend;
 int ptimestart,ptimeend;
 
 cin>>nc;
 m=1;  
 
 while(nc>0)
 {
            hit=0;
            
            cin>>h0>>h1>>semi>>m0>>m1;
            wtimestart=((h0-48)*600)+((h1-48)*60)+((m0-48)*10)+(m1-48);
            
            cin>>h0>>h1>>semi>>m0>>m1;
            wtimeend=((h0-48)*600)+((h1-48)*60)+((m0-48)*10)+(m1-48);
            
            cin>>h0>>h1>>semi>>m0>>m1;
            ptimestart=((h0-48)*600)+((h1-48)*60)+((m0-48)*10)+(m1-48);
            
            cin>>h0>>h1>>semi>>m0>>m1;
            ptimeend=((h0-48)*600)+((h1-48)*60)+((m0-48)*10)+(m1-48);
            
            //cout<< wtimestart<<endl;
            //cout<< wtimeend<<endl;
            //cout<< ptimestart<<endl;
            //cout<< ptimeend<<endl;
            
            

            if((ptimestart<wtimestart)&& (ptimeend<wtimestart)) hit=1;
            if((wtimestart<ptimestart)&& (wtimeend<ptimestart)) hit=1;
            
            if (hit==1) cout << "Case "<<m<<": Hits Meeting"<<endl;
            else cout << "Case "<<m<<": Mrs Meeting"<<endl;

            nc--;
            m++; 

}          
 
 return 0;
    
}
