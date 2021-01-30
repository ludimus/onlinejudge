#include <stdio.h>
#include <fcntl.h>


char s[20];
        
int ismirchar(char a, char b)
{
 int r=0;
 

 if((a=='A') && (b=='A')) r=1;
 if((a=='E') && (b=='3')) r=1;
 if((a=='H') && (b=='H')) r=1;
 if((a=='I') && (b=='I')) r=1;
 if((a=='J') && (b=='L')) r=1;
 if((a=='L') && (b=='J')) r=1;
 if((a=='M') && (b=='M')) r=1;
 if((a=='O') && (b=='O')) r=1;
 if((a=='S') && (b=='2')) r=1;
 if((a=='T') && (b=='T')) r=1;
 if((a=='U') && (b=='U')) r=1;
 if((a=='V') && (b=='V')) r=1;
 if((a=='W') && (b=='W')) r=1;
 if((a=='X') && (b=='X')) r=1;
 if((a=='Y') && (b=='Y')) r=1;
 if((a=='Z') && (b=='5')) r=1;
 if((a=='1') && (b=='1')) r=1;
 if((a=='2') && (b=='S')) r=1;
 if((a=='3') && (b=='E')) r=1;
 if((a=='5') && (b=='Z')) r=1;
 if((a=='8') && (b=='8')) r=1;
 
 return(r);
 }    


main(){
 int h,t; 
 char c;
 int ispal,ismir;  
 while(scanf("%s", &s)!=EOF){
    ispal=1;
    ismir=1;
    h=0;t=strlen(s)-1;
    while(t>=h)
     {
      if(s[h]!=s[t])ispal=0;
      if(ismirchar(s[h],s[t])==0)ismir=0;
      h++;t--;
      }
     if((ismir==1) && (ispal==1)) printf("%s -- is a mirrored palindrome.",s);
     if((ismir==1) && (ispal==0)) printf("%s -- is a mirrored string.",s);
     if((ismir==0) && (ispal==1)) printf("%s -- is a regular palindrome.",s);
     if((ismir==0) && (ispal==0)) printf("%s -- is not a palindrome.",s);
     printf("\n\n"); 
    
 }   
}

      
  
