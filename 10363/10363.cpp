#include <iostream>

using namespace std;

char M[3][3];

int countc (char c)
{
    
int i,j,r=0;

for(i=0;i<3;i++)
for(j=0;j<3;j++)
 if(M[i][j]==c) r++;
//cout<<"count: "<<c <<"  "<< r<<endl;
return r;
}

int hasline( char c)
{
    int ret=0;
    
    if((M[0][0]==c)&& (M[0][1]==c)&& (M[0][2]==c)) ret=1;
    if((M[1][0]==c)&& (M[1][1]==c)&& (M[1][2]==c)) ret=1;
    if((M[2][0]==c)&& (M[2][1]==c)&& (M[2][2]==c)) ret=1;
    
    if((M[0][0]==c)&& (M[1][0]==c)&& (M[2][0]==c)) ret=1;
    if((M[0][1]==c)&& (M[1][1]==c)&& (M[2][1]==c)) ret=1;
    if((M[0][2]==c)&& (M[1][2]==c)&& (M[2][2]==c)) ret=1;
    
    if((M[0][0]==c)&& (M[1][1]==c)&& (M[2][2]==c)) ret=1;
    if((M[2][0]==c)&& (M[1][1]==c)&& (M[0][2]==c)) ret=1;
    
  //  cout << c<< " line : " <<ret<<endl;
  
  return ret;
}   
 

int main()
{
 int i,j,n;
 int nrx,nro,nrdot;
 int good=1;
 int wx,wo;
 
 char dummy[10];
 
 //freopen("10363.in","r",stdin);
 
 cin>>n;
 while(n>0)
 {
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      cin>>M[i][j];
  
   
  // cout<<M[0]<<endl;
  // cout<<M[1]<<endl;
  // cout<<M[2]<<endl;
   nrx=countc('X');
   nro=countc('O');
   nrdot=countc('.');    
   
   if((nrx -nro)> 1) good=0;
   if((nrx - nro)<0) good=0;
   if((nrx+nro+nrdot)!=9) good=0;
   
   wx=hasline('X');
   wo=hasline('O');
   
   if((wx==1)&&(wo==1)) good=0;
   if(wx==1 &&((nrx-nro)!=1)) good=0;
   if(wo==1 &&((nrx-nro)!=0)) good=0;
   
   
   if(good) cout<< "yes"<<endl;
   else cout <<"no"<<endl;
   good=1;
   n--;
} 
 
 
 return 0;   
}



                 
    
