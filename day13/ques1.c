#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of array")
    scanf("%d",&n)
    int arr[n];
    printf("enter elements : \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("array elementsare: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}