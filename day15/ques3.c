#include <stdio.h>
int main ()
{
    int n,i,last;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    last=arr[i-1];
    for(i=n-1;i<n;i++){
        arr[i]=arr[i-1];
    }
    printf("array after right rotation\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}