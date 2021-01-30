#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
int nc,A,B,found;
int x,y;

freopen ("10812.in" ,"r",stdin);

cin>>nc;

while(nc>0)
{
	cin>>A>>B;
	//cout <<A<<B<<endl;
	
	x=B;
	y=A-x;
	found=0;
	while((x<=A)&& (found==0))
	{
		if(((x-y)==B)&&((x+y)==A))
		{
		   found=1;	 
		   cout<<x<<" " <<y<<endl;
	    }
		//cout<<x<<y<<endl;
		y--;
		x++;
	}
	if(found==0) cout<<"impossible"<<endl;
	nc--;
}
return 0;
}
