#include <iostream>
#include <cstdio>

using namespace std;

int M[12]={31,28,31,30,31,30,31,31,30,31,30,31};


void setleap(int year){

M[1]=28;

if (year%4==0) M[1]=29;
if (year%100==0) M[1]=28;
if (year%400==0) M[1]=29;
}

int main()
{

    int cd,cm,cy,n;


    freopen("893.in","r",stdin);
    cin>>n>>cd>>cm>>cy;
    //cout<< cd <<" "<<cm<<" "<< cy<<endl;
    while (cd!=0){
        cm--;

        while (n>=146097){
            cy+=400;
            n=n-146097;
        }
      //  while (n>=36524){
      //      cy+=100;
      //      n=n-36524;
      //  }

        while(n>0){
            setleap(cy);
            cd++;
            if (cd>M[cm]){cm++;cd=1;}
            if (cm==12){cm=0;cy++;setleap(cy);}
            n--;
            }
         cout<< cd <<" "<<cm+1<<" "<< cy<<endl;
         cin>>n>>cd>>cm>>cy;

        }

    return (0);
}
