#include<stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("enter size of 1st array");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter the elements of array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n2];
    printf("enter the elements of array");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("intersection:");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
                break;
            }
        }
    }
    return 0;
}