#include<stdio.h>
int main()
{
    int arr[100],n,i,j,maxfreq=0,element;
    printf("enter size");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     for(j=i+1;j<n;j++)
     {
         if(arr[i]==arr[j])
         count++;
     }
       if(count>maxfreq)
       {
        maxfreq=count;
        element=arr[i];
       }
    }
    printf("elements with max frequency=%d",element);
    return 0;

}