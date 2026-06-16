#include<stdio.h>
int main()
{
    int n,i;
    float avg;
    int sum=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("sum=%d\n",sum);
    printf("average=%.2f\n",avg);

    return 0;
}