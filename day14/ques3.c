#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;
    printf("enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:\n");
    for(i=0;i<n;i++);
    {
        scanf("%d",&arr[i]);
    }
    int largest= arr[0],second=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second=largest;
            largest=arr[i];
        }
        elseif(arr[i]>second&& arr[i]!=largest)
        {
            second=arr[i];
        }
    }
    printf("second largest element=%d",second);
    return 0;
}