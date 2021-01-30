
                
 main()
{

long int n,p;
long long int left,right;
int sol=0;

 
n=3;
p=2;
left=1;
right=3;
   
while(sol<10){
   n++;
   if (left<right){
       p++;
       left+=(p-1);
       right+=n;
       right-=p;
   }
   else right+=n;    

   if (left==right){printf ("%10d%10d\n",p,n);sol++;}

}   

}
