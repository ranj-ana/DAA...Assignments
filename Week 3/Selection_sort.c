#include<stdio.h>
int main()
{
     int t;
    scanf("%d",&t);
    while(t>0)
  {
   int i, j, n, temp,swaps=0,c=0;;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          c++;
         if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;  
         } 
       
      } 
    swaps++;
   }
   for (i = 0; i < n; i++)
          printf("%d ", arr[i]);
           printf(" \ncomparisons  = %d",c);
      printf(" \nshifts  = %d",swaps);
      t--;
}
   return 0;
}
