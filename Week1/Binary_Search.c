#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
   {
     int n,k,flag = 0;
     scanf("%d", &n);
     int mid,first=0,last=n-1;
     int array[n];
     for (int i = 0; i < n; i++)
     scanf("%d", &array[i]);
     scanf("%d", &k);
     int c=0;
     while (first <= last)
    {
      c++;
      mid = (first+last)/2;
     if (array[mid]==k)
     {
       printf("Present ");
       printf("%d",c);
       flag = 1;
       break;
     }
     else if(k<array[mid])
         last = mid-1;
     else 
         first = mid+1;
    }
   if(flag==0)
   {
     printf("Not Present ");
     printf("%d",c);
     t--;
   } 
  }        
  return 0;
}