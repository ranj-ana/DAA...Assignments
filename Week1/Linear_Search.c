#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
     while(t>0)
   {
     int n,k,flag = 0,i;
     scanf("%d", &n);
     int array[n];
     for(i = 0; i < n; i++)
     scanf("%d", &array[i]);
     scanf("%d", &k);
     int c=0;
   for(i=0;i<n;++i)
   {
       c++;
        if(array[i]==k)
        {
          printf("Present ");
          printf("%d",c);
          flag = 1;
          break;
        }      
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