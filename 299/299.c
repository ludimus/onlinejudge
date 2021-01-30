int main(){
    
    int n,l,swaps;
    int train[51];
    int i,j,k,c,t;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){       
        swaps=0;
        scanf("%d",&l);
        for (j=0;j<l;j++)
        scanf("%d",&train[j]);
          c=l;
          for (j=0;j<l-1;j++){
          c--;
           for (k=0;k<c;k++)
             if(train[k]>train[k+1]){
               t=train[k];
               train[k]=train[k+1];
               train[k+1]=t;
               swaps++;
            }    
          }
 printf("Optimal train swapping takes %d swaps.\n",swaps);
       }      
      

}               
        
