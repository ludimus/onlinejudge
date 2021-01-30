#include <iostream>
#include <cstring>
#include <string>

int MAX=2000;
char code[10];

using namespace std;

char decode(int l)
{
     int i;
 code[l]='\0';
 
 string S=code;    
 if(S==".-") cout<<"A";
 if(S=="-...") cout<<"B";
 if(S=="-.-.") cout<<"C";
 if(S=="-..") cout<<"D";
 if(S==".") cout<<"E";
 if(S=="..-.") cout<<"F";
 if(S=="--.") cout<<"G";
 if(S=="....") cout<<"H";
 if(S=="..") cout<<"I";
 if(S==".---") cout<<"J";
 if(S=="-.-") cout<<"K";
 if(S==".-..") cout<<"L";
 if(S=="--") cout<<"M";
 if(S=="-.") cout<<"N";
 if(S=="---") cout<<"O";
 if(S==".--.") cout<<"P";
 if(S=="--.-") cout<<"Q";
 if(S==".-.") cout<<"R";
 if(S=="...") cout<<"S";
 if(S=="-") cout<<"T";
 if(S=="..-") cout<<"U";
 if(S=="...-") cout<<"V";
 if(S==".--") cout<<"W";
 if(S=="-..-") cout<<"X";
 if(S=="-.--") cout<<"Y";
 if(S=="--..") cout<<"Z";
 if(S=="-----") cout<<"0";
 if(S==".----") cout<<"1";
 if(S=="..---") cout<<"2";
 if(S=="...--") cout<<"3";
 if(S=="....-") cout<<"4";
 if(S==".....") cout<<"5";
 if(S=="-....") cout<<"6";
 if(S=="--...") cout<<"7";
 if(S=="---..") cout<<"8";
 if(S=="----.") cout<<"9";
 if(S==".-.-.-") cout<<".";
 if(S=="--..--") cout<<",";
 if(S=="..--..") cout<<"?";
 if(S==".----.") cout<<"\'";
 if(S=="-.-.--") cout<<"!";
 if(S=="-..-.") cout<<"/";
 if(S=="-.--.") cout<<"(";
 if(S=="-.--.-") cout<<")";
 if(S==".-...") cout<<"&";
 if(S=="---...") cout<<":";
 if(S=="-.-.-.") cout<<";";
 if(S=="-...-") cout<<"=";
 if(S==".-.-.") cout<<"+";
 if(S=="-....-") cout<<"-";
 if(S=="..--.-") cout<<"_";
 if(S==".-..-.") cout<<"\"";
 if(S==".--.-.") cout<<"@";
 
 
 
 
}

int main()
{
    
    char L[MAX];
    int nc;
    int i,ll,cl;
    int m=0;
    
    
    cin>>nc;
    cin.getline(L,MAX,'\n');//get dummy eoln;
    while(nc--)
    {
      m++;
      if(m>1)cout<<endl;
      cout<<"Message #"<<m<<endl;
      cin.getline(L,MAX,'\n');
      //cout<<L<<endl;
      ll=strlen(L);
      cl=0;
      for(i=0;i<ll;i++)
        {
         
         if(L[i]==' ')
         {
          decode(cl);
          cl=0;
         } 
         if((L[i]==' ')&&(L[i+1]==' '))
         {
          cout<<" ";
          i++;
         }
         if ((L[i]=='.')||(L[i]=='-'))
          code[cl++]=L[i];
     } 
     decode(cl);      
     cout<<endl;                  
      
      
    } //end nc
} //end main    
               
