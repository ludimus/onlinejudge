#include <stdio.h>

main(){

char T[128];    

T['q']='[';
T['w']=']';
T['e']='q';
T['r']='w';
T['t']='e';
T['y']='r';
T['u']='t';
T['i']='y';
T['o']='u';
T['p']='i';
T['[']='o';
T[']']='p';

T['a']=';';
T['s']=92;
T['d']='a';
T['f']='s';
T['g']='d';
T['h']='f';
T['j']='g';
T['k']='h';
T['l']='j';
T[';']='k';
T[92]='l';


T['z']=',';
T['x']='.';
T['c']='z';
T['v']='x';
T['b']='c';
T['n']='v';
T['m']='b';
T[',']='n';
T['.']='m';

T['Q']='{';
T['W']='}';
T['E']='Q';
T['R']='W';
T['T']='E';
T['Y']='R';
T['U']='T';
T['I']='Y';
T['O']='U';
T['P']='I';
T['{']='O';
T['}']='P';

T['A']=':';
T['S']=34;
T['D']='A';
T['F']='S';
T['G']='D';
T['H']='F';
T['J']='G';
T['K']='H';
T['L']='J';
T[':']='K';
T[34]='L';


T['Z']='<';
T['X']='>';
T['C']='Z';
T['V']='X';
T['B']='C';
T['N']='V';
T['M']='B';
T['<']='N';
T['>']='M';

T[' ']=' ';

 
char c;  
 while(scanf("%c",&c)!=EOF)
   printf("%c",T[c]);
    
}

      
  