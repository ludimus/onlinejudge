#include <iostream>

using namespace std;


int L[1000];

int sort(int n){
  
  int temp,count;
  int i,j,l;   
  count=0;
  l=n-1;
  
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<l;j++)
   if(L[j]>L[j+1])
     {
  //    cout<<"swapping "<<L[j]<<"  " <<L[j+1]<<endl;
      temp=L[j];
      L[j]=L[j+1];
      L[j+1]=temp;
      count++;
     }
   l--;
  }               
  return count;

}     
     


int main()
{
 int n,i;
 
 while(cin>>n){
   for(i=0;i<n;i++)
     cin>>L[i];
   cout<<"Minimum exchange operations : "<<sort(n)<<endl;
 }
 return 0;   
}
