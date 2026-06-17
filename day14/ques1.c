#include <stdio.h>
int main()
{
    int n,i,key,found=0;
    printf("enter the number of elements");
    scanf("%d",&n):
    int arr[n];
    printf(enter array elements:\n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
{
    if(arr[i]==key){
        printf("element found at position %d\n",i+1):
        found=1;
        break;
    }
}
if(!found){
    printf("element not found\n");
}
return 0;
}