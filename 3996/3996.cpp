#include <iostream>

using namespace std;

int main()
{
 int n,p,w;
 int L[10];
 int i;
 int nc=0;
 
 freopen("3996.in","r",stdin);
 
 cin>>nc;
 while(nc>0)
 {            
   cin>>n;
   for(i=0;i<10;i++) L[i]=0;   //reset stats
 
   while(n>0)
   {
     w=n;
     p=1;
     if(n>=10)p=2;
     if(n>=100)p=3;
     if(n>=1000)p=4;
     if(p==4){L[w/1000]++;w%=1000;p--;}
     if(p==3){L[w/100]++;w%=100;p--;}
     if(p==2){L[w/10]++;w%=10;p--;}
     if(p==1) L[w%10]++;
     n--;
   } 
   for(i=0;i<9;i++)
   cout << L[i]<< " ";
   cout << L[9] << endl;
   

   nc--;
}
 return 0;
    
}
