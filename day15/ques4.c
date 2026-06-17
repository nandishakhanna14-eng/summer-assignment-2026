#include <stdio.h>
int main()
{
    int i,n,j=0:
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=o)
        {
            arr[j++]=arr[i];
        }
    }
    while(j<n)
    {
        arr[j++]=0;
    }
    printf("array after moving zeroes to end: \n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}