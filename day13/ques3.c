#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number of elements:"):
    scanf("%d", &n);
    int arr[n];
    printf("enter elements":\n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int largest= arr[0];
    int smallest= arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
        iff( arr[i]<smallest){
            smallest= arr[i];
        }
    }
    printf("largest element=%d\n" , largest);
    printf("smallest element=%d\n", smallest);
    return 0;
}