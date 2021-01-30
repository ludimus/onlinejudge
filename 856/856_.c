#include <stdio.h>



char A[10][15];
int AL[10];

char V[26][26];
char cipher[15];
char msg[15];



void init(){
    
    int i,j;
    
    for (i=0;i<26;i++)
     for (j=0;j<26;j++)
      V[i][j]=((i+j+1)%26)+65;
     
    strcpy(A[1],"one");      
    strcpy(A[2],"two");
    strcpy(A[3],"three");
    strcpy(A[4],"four");
    strcpy(A[5],"five");      
    strcpy(A[6],"six");
    strcpy(A[7],"seven");
    strcpy(A[8],"eight");
    strcpy(A[9],"nine");
    strcpy(A[0],"zero");
    AL[0]=4;
    AL[1]=3;    
    AL[2]=3;
    AL[3]=5;    
    AL[4]=4;
    AL[5]=4;    
    AL[6]=3;
    AL[7]=5;    
    AL[8]=5;
    AL[9]=4;    
   strcpy(cipher,"PQRPQRPQR");                 
}

void decrypt(int a,int b,int c){


int i,j,k=0;
int l;
 
 for(i=0;i<AL[a];i++)
   msg[k++]=A[a][i];
 for(i=0;i<AL[b];i++)
   msg[k++]=A[b][i];
 for(i=0;i<AL[c];i++)
   msg[k++]=A[c][i];
  
if(strlen(cipher)==(k)){
 
   for(i=0;i<k;i++)
      for(j=0;j<26;j++)
       if(V[msg[i]-97][j]==cipher[i]){
        printf("%c",j+65);
        j=26;
       }      

printf(" -> ");
for(i=0;i<k;i++)printf("%c",msg[i]);
printf("\n");
}   
 
}  



void printV(){
    
    int i,j;
    
    for (i=0;i<26;i++){
     for (j=0;j<26;j++)
      printf("%c",V[i][j]);
      printf("\n");
  }    
}


int main(){
    
    int i,j,k;
    
    init();
    while(gets(cipher)){
    for(i=9;i>=0;i--)
        for(j=9;j>=0;j--)
            for(k=9;k>=0;k--)                  
    decrypt(i,j,k);
    printf("\n");
}    
}    
    
