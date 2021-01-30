#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int M[12][12];
char* N[12]= {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};

char L[1010];
int V[12];

void createmajorscales()
{
     int i,j;
     
     for(i=0;i<12;i++)
     for(j=0;j<12;j++)
        M[i][j]=0;
     
     for(i=0;i<12;i++){
       j=i;
       M[i][j%12]=1;
       M[i][(j+2)%12]=1;
       M[i][(j+4)%12]=1;
       M[i][(j+5)%12]=1;
       M[i][(j+7)%12]=1;
       M[i][(j+9)%12]=1;
       M[i][(j+11)%12]=1;
       M[i][(j+12)%12]=1;
      }
}


void process_note(int n)
{
     int i;
    
    // cout<<"processing note: "<< n << endl;
     for (i=0;i<12;i++)
      if(M[i][n]==0)V[i]=0;
}      


    
    
     
     
void printM()
{
 int i,j;
       
 for(i=0;i<12;i++){
   for(j=0;j<12;j++)
     cout<<M[i][j]<<" ";
   cout <<endl;
 }       
}               

int main()
{
    string S;
    int i,l,f;
    
    createmajorscales();
    //printM();
    
    cin.getline(L,1010);
    S=L;
    while((int)S.find("END")<0)
    {
     for(i=0;i<12;i++)
       V[i]=1;
     
     //cout<<"processing line: "<< S << endl;
     
     l=strlen(L);
     L[l]=' ';
     for(i=0;i<l;i++)
      if((L[i]=='C')&&(L[i+1]==' ')){ process_note(0);i+=1;}
      else if ((L[i]=='C')&&(L[i+1]=='#')){ process_note(1);i+=2;}
      else if ((L[i]=='D')&&(L[i+1]==' ')){ process_note(2);i+=1;}
      else if ((L[i]=='D')&&(L[i+1]=='#')){ process_note(3);i+=2;}
      else if ((L[i]=='E')&&(L[i+1]==' ')){ process_note(4);i+=1;}
      else if ((L[i]=='F')&&(L[i+1]==' ')){ process_note(5);i+=1;}
      else if ((L[i]=='F')&&(L[i+1]=='#')){ process_note(6);i+=2;}
      else if ((L[i]=='G')&&(L[i+1]==' ')){ process_note(7);i+=1;}
      else if ((L[i]=='G')&&(L[i+1]=='#')){ process_note(8);i+=2;}
      else if ((L[i]=='A')&&(L[i+1]==' ')){ process_note(9);i+=1;}
      else if ((L[i]=='A')&&(L[i+1]=='#')){ process_note(10);i+=2;}
      else if ((L[i]=='B')&&(L[i+1]==' ')){ process_note(11);i+=1;}
     
     // print solution
     f=0;
     for (i=0;i<12;i++)
      if(V[i]==1)
      {
       if (f>0)cout<<" ";
       
       cout<<N[i];
       f++;
      }
     cout<<endl;  
      
     cin.getline(L,1010);
     S=L;
    } 
}    
                  
       
                       
           
     
