#include <stdio.h>
int main()
{
    int n,i,key;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter sorted elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter elements to search");
    scanf("%d",&key);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("element found at the position %d",mid+1);
            return 0;
        }
        else if(arr[mid]<key){
            low=mid +1;
        }
        else{
            high=mid-1;
        }
        printf("element not found");
    }
    return 0;
}    