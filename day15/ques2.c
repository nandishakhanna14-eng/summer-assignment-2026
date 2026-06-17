#include <stdio.h>
int main()
{
    int i,n,first;
    printf("enter the number of elements");
    scanf("%d",&arr[i]);

    int arr[n];
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first= arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]= first;
    printf("array after left rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}