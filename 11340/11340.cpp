#include <iostream>
#include <cstdio>
#include <cstring>


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
char dummy[10];
//int l,i;


freopen("11340.in","r",stdin);

cin>>nc;
while(nc>0)
{
  initP(); 
  totalpay=0;
  
  cin>>np;
  cin.getline(dummy,10,'\n');  //read eol
  
    
  while(np>0)
  {
	c=getchar();
	cin>>pc;
	P[c]=pc;
	cin.getline(dummy,10,'\n');//read eol
//	cout<<c<<" "<<pc<<endl;
	np--;
  }
  cin>>nl;
  cin.getline(dummy,10,'\n');//read eol
  while(nl>0)
  {
	c=getchar();
	while(c!=10){
	// cout<<c; 	
	 totalpay+=P[c];
	 c=getchar();
		 
    }
	nl--;
	//cin.getline(dummy,10,'\n');//read eol 
   }
   
printf("%.2lf$\n",(double)totalpay/100);
nc--;	
}	//cases


return 0;
}
