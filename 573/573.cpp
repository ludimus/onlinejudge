#include <iostream>

using namespace std;

int main()
{
 float H,U,D,F;
 float IH,DC,HAC,HAS;
 int day;

// freopen("573.in","r", stdin);
// freopen("573.out", "wr", stdout);
 cin>>H>>U>>D>>F;
 do{
    //cout<<H<<U<<D<<F<<"\n";
    IH=0;
    day=0;
    do{
      day++;
      DC=U*((1-(day-1)*F/100));
      if(DC<0) DC=0;
      HAC=IH+DC;
      HAS=HAC-D;
          //  printf("%d %f %f %f %f \n", day, IH,DC,HAC,HAS); 
            if (HAC>H) cout <<"success on day "<< day << "\n";
            if (HAS<0) cout <<"failure on day "<< day << "\n";
      IH=HAS; 
     }while((HAC<=H)&&(HAS>=0));
 cin>>H>>U>>D>>F;   
}while(H!=0);


 return (0);   
}
