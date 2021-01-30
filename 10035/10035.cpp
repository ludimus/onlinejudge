#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
int c,nc,x,y;
unsigned long long a,b;


freopen ("10035.in","r",stdin);
cin>>a>>b;
while((a>0)||(b>0))
{
	nc=0;
	c=0;
	while((a>0)||(b>0))
	{
	// cout<<a<<"  "<<b<<endl;
	 x=a%10;
	 y=b%10;
	 c=(x+y+c)/10;
	 if (c>0)nc++;
	 a/=10;
	 b/=10;
	}
	if(nc==0)cout<<"No carry operation."<<endl;
	if(nc==1)cout<<"1 carry operation."<<endl;
	if(nc>1)cout<<nc<<" carry operations."<<endl;
	cin>>a>>b; 
}
	



return 0;

}
