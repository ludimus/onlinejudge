#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

vector<int> changes;
char line[1000009];


void buildchanges(int n)
{
	unsigned int i;
	
	changes.erase(changes.begin(),changes.end());
	changes.push_back(0);
	for (i=1;i<n;i++)
	  if(line[i]!=line[i-1]){
	  changes.push_back(i);
	  }
      changes.push_back(n);
	  
	
	  
}	  



int main()
{

char temp[50];
bool isgood;

int casenum=0;
int nq,start,end,t,pos;

//freopen("10324.in","r",stdin);
while(gets(line)!=NULL){
	if(strlen(line)>0)
	{
		buildchanges(strlen(line));
		casenum++;
		cout<<"Case "<<casenum<<":"<<endl;
		cin.getline(temp,50);
		sscanf(temp,"%d", &nq);
		while(nq--){
		  isgood=false;	
		  cin.getline(temp,50);
		  sscanf(temp,"%d %d", &start, &end);
		  if (start>end){t=start;start=end;end=t;}
		  
		  pos=0;
		  //cout<<start<<" "<<end<<"  "<<pos<<" " <<changes[pos]<<"   ";
		  while(start>=changes[pos+1])pos++;
		 // cout<<start<<" "<<end<<"  "<<pos<<" " <<changes[pos]<<"   ";
		  if(start==end)isgood=true;
		  else if(end<changes[pos+1])
			     isgood=true;
			    
			if(isgood) cout<<"Yes";else cout<<"No";
		    cout<<endl;
		} 
     
    }
  // cin.getline(line,1000009);
}
return 0;
}
