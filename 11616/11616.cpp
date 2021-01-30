#include <iostream>
#include <cstring>
using namespace std;

char S[100];


void tonum()
{
  int num;
  int i;
  int l=strlen(S);
  while(i<l)
  {
    
    if((S[i]=='I')&&(S[i+1]=='X')){num+=9;i+=2;}
    else if((S[i]=='I')&&(S[i+1]=='V')){num+=4;i+=2;}
    else if((S[i]=='X')&&(S[i+1]=='C')){num+=90;i+=2;}
    else if((S[i]=='X')&&(S[i+1]=='L')){num+=40;i+=2;}
    else if((S[i]=='C')&&(S[i+1]=='M')){num+=900;i+=2;}
    else if((S[i]=='C')&&(S[i+1]=='D')){num+=400;i+=2;}
    else if (S[i]=='I'){num+=1;i+=1;}
    else if (S[i]=='V'){num+=5;i+=1;}
    else if (S[i]=='X'){num+=10;i+=1;}
    else if (S[i]=='L'){num+=50;i+=1;}
    else if (S[i]=='C'){num+=100;i+=1;}
    else if (S[i]=='D'){num+=500;i+=1;}
    else if (S[i]=='M'){num+=1000;i+=1;}
  }
  
  
  cout<<num<< endl;     

}



void toroman()
{
     int i,l,m;
     int f=1;
     m=0;
     l=strlen(S)-1;
     
     for(i=l;i>=0;i--){
           m+=f*(S[i]-48);
           f*=10;
           }
     
     while(m>0)
     {
      if(m>=1000){cout<<"M";m-=1000;}
      else if (m>=900){cout<<"CM";m-=900;}
      else if (m>=500){cout<<"D";m-=500;} 
      else if (m>=400){cout<<"CD";m-=400;} 
      else if (m>=100){cout<<"C";m-=100;} 
      else if (m>=90){cout<<"XC";m-=90;} 
      else if (m>=50){cout<<"L";m-=50;} 
      else if (m>=40){cout<<"XL";m-=40;} 
      else if (m>=10){cout<<"X";m-=10;} 
      else if (m>=9){cout<<"IX";m-=9;} 
      else if (m>=5){cout<<"V";m-=5;} 
      else if (m>=4){cout<<"IV";m-=4;} 
      else if (m>=1){cout<<"I";m-=1;} 
      }    
     
     cout<<endl;
      
}


int main()
{
 
 while(cin.getline(S,100,'\n'))
 {
   if((S[0]>47)&&(S[0]<58))
      toroman();
   else
      tonum();
 }
 
 return 0;   
}
