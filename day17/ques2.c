#include<stdio.h>
int main()
{
    int n1,n2,i;
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
    printf("union");
    for(i=0;i<n1;i++)
    {
        printf("%d",arr1[i]);
    }
    for(i=0;i<n2;i++){
        int found=0;
        for(int j=0;j<n1;j++){
            if(arr2[i]==arr1[j]){
                found=1;
                break;
            }
        }
        if(!found){
            printf("%d",arr2[i]);
        }
    }
    return 0;
}