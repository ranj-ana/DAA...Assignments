#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
   {
   int i,n,x;
   printf("Enter the size of the array");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Enter the number to be searched");
   scanf("%d",&x);
   for(i=0;i<n;++i)
        if(arr[i]==x)
            break;

    if(i<n)
        printf("Element found at index %d\n",i+1);
    else
        printf("Element not found");
   }
    return 0;
}
