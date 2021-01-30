#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char M[256];


int initM()
{
	M['A']='2';
	M['B']='2';
	M['C']='2';
	M['D']='3';
	M['E']='3';
	M['F']='3';
	M['G']='4';
	M['H']='4';
	M['I']='4';
	M['J']='5';
	M['K']='5';
	M['L']='5';
    M['M']='6';
	M['N']='6';
	M['O']='6';
	M['P']='7';
	M['Q']='7';
	M['R']='7';
	M['S']='7';
	M['T']='8';
	M['U']='8';
	M['V']='8';
	M['W']='9';
	M['X']='9';
	M['Y']='9';
	M['Z']='9';
	M['0']='0';
	M['1']='1';
    M['-']='-';
 
 return(0);
}

int main()
{
 int i,l;
 
 //freopen("10921.in","r",stdin);
 initM();
 char S[32];
 while(cin.getline(S,32,'\n'))
 {
	 l=strlen(S);
	// cout<<S<<endl;
	for(i=0;i<l;i++)
	  cout<<M[S[i]];
	cout<<endl;
	  
  }	 
 
 return 0;
}
