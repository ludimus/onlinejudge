
#include <stdio.h>



using namespace std;

int P[256];

int initP()
{
int i;

  for(i=0;i<255;i++)
     P[i]=0;
     
     return 0;
}

int main()
{
int nc,np,nl;
int pc;
unsigned long long totalpay;
unsigned char c;
unsigned char L[10010];
int l,i;


freopen("11340.in","r",stdin);

    gets(L);
	nc = atoi(L);
while(nc>0)
{
  initP(); 
  totalpay=0;
  
  cin>>np;
    
  while(np>0)
  {
	cin>>c>>pc;
	P[c]=pc;
	np--;
  }
  cin>>nl;
  while(nl>=0)
  {
	 //cin.getline(L,10010,'\n');
	 gets(L);
	 cout<<L<<endl;
	 l=strlen(L);
	 for(i=0;i<l;i++)
	  totalpay+=P[L[i]];
	 nl--;
	 
   }
   
     	  
nc--;
printf("%.2f$\n",(float)totalpay/100);
	
}	//cases


return 0;
}
