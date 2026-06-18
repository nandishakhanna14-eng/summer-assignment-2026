#include<stdio.h>
int main()
{
    int n1,n2,i;
    printf("enter size of first array");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter the elements of array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter size of second array");
    scanf("%d",&n2);
    int arr2[n2];
    printf("enter the elements of array");
    for(i=0;i<n2;i++)
    {
        scanf("%d"&arr2[i]);
    }
    int merged[n1+n2];
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(i=0;i<n2;i++){
        merged[i]=arr2[i];
    }
    printf("merged array:");
    for(i=0;i<n1+n2:i++)
    {
        printf("%d",merged[i]);
    }
    return 0;

}