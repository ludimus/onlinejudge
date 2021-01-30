#include <iostream>
#include <string>

using namespace std;


char S[25][110];

int N[8];

int D[10][7]={
    {1,0,1,1,1,1,1},
    {0,0,0,0,0,1,1},
    {1,1,1,0,1,1,0},
    {1,1,1,0,0,1,1},
    {0,1,0,1,0,1,1},
    {1,1,1,1,0,0,1},
    {1,1,1,1,1,0,1},
    {1,0,0,0,0,1,1},
    {1,1,1,1,1,1,1},
    {1,1,1,1,0,1,1}};
    


void initscreen()
{
     int i,j;
     for(i=0;i<25;i++)
     for(j=0;j<110;j++)
     S[i][j]=' ';
     
                    
}                    

void printscreen(int size,int d)
{
     int i,j;
     for(i=0;i<2*size+3;i++)
     {
        for(j=0;j<(size+2)*d +(d-1);j++)
          cout<<S[i][j];
        cout<<endl;
     }              
}                    





int main()
{
    
 int size, pos,c;
 int i,j,n,p,digit,startx,starty;
 string number;
 
 c=0;
 cin>>size>>number;
 while((size>0)||(number!="0"))
 {
  c++;
  initscreen();
       
     //claculate number lenght;
     p=number.size();
                 
    // cout<<p<<endl; 
     
          
     while(p>0){
         digit=(int)(number[p-1]-48);       
         
      //   cout<<digit<<endl;
         //segment 0
         startx=(p-1)*(size+2+1)+1;
         starty=0;
         if(D[digit][0]==1)
         for(i=0;i<size;i++) S[starty][startx+i]='-';
         //segment 1
         starty=starty+size+1;
         if(D[digit][1]==1)
         for(i=0;i<size;i++) S[starty][startx+i]='-';
         //segment 2
         starty=starty+size+1;
         if(D[digit][2]==1)
         for(i=0;i<size;i++) S[starty][startx+i]='-';
         //segment 3
         starty=1;
         startx=(p-1)*(size+2+1);
         if(D[digit][3]==1)
         for(i=0;i<size;i++) S[starty+i][startx]='|';
         //segment 5
         starty=1;
         startx=(p-1)*(size+2+1)+size+1;
         if(D[digit][5]==1)
         for(i=0;i<size;i++) S[starty+i][startx]='|';
         
         
         //segment 6
         starty=starty+size+1;
         if(D[digit][6]==1)
         for(i=0;i<size;i++) S[starty+i][startx]='|';
         //segment 4
         startx=(p-1)*(size+2+1);
         if(D[digit][4]==1)
         for(i=0;i<size;i++) S[starty+i][startx]='|';
        
         p--;
         }  
      if(c>1)cout<<endl;
      printscreen(size,number.size());
     
     
     
     
     cin>>size>>number;
  }   
                            
    
 return 0;   
}

