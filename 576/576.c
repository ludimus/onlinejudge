#include <stdio.h>
#include <string.h>

char in[205];

char c;

int isvowel(char c){
    int r=0;
    if (c=='a') r=1;
    if (c=='e') r=1;
    if (c=='i') r=1;
    if (c=='o') r=1;
    if (c=='u') r=1;
    if (c=='y') r=1;
    return(r);
}    

int syllables(int s,int l){
    
    int vowel=0;
    int i;
    int f=0;
    
    for(i=s;i<l;i++){
        if( ( isvowel(in[i]) ) && (vowel==0) ) {f++;vowel=1;}
        if( (!isvowel(in[i]) ) && (vowel==1) ) vowel=0;
    }
    return(f);
}        
        
int findslash(int s){

int i;
int r=0;
  for(i=s;i<strlen(in);i++)
    if(in[i]=='/'){r=i; i=205;}
    return(r);
}    
    


int main(){
    
    int l1,l2,l3;
    int slashpos;
    int start,end;
    
    while(gets(in)){
        if(!strcmp(in,"e/o/i")) exit(0);
        
        start=0;
        end=findslash(start);
        l1=syllables(start,end);
        
        start=end+1;
        end=findslash(start);
        l2=syllables(start,end);
        
        start=end+1;
        end=strlen(in);
        l3=syllables(start,strlen(in));
       
        
          
    
    
        if(l1!=5) printf("1\n");
          else if (l2!=7) printf("2\n");
               else if (l3!=5) printf("3\n");
                    else printf("Y\n");
                    
}                    

  
}

    
