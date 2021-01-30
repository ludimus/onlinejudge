#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
 char line[100];
 int h,m;
 float hdegree,mdegree,sol;


 gets(line);
 sscanf(line,"%d:%d",&h,&m);

 while(h!=0 || m!=0)
 {
   h%=12;
   hdegree=((float)h*30);
   if(m>0)hdegree+=30*((float)m*6/360);
   mdegree=(float)m*6;
   sol=hdegree-mdegree;
   if(sol<0)sol*=-1;
   if(sol>180)sol=360-sol;
   printf("%.3f\n", sol);

   gets(line);
   sscanf(line,"%d:%d",&h,&m);
}

 return 0;
}
