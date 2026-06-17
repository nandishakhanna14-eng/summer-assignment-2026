#include<stdio.h>
int main()
{
    int n,i, sum=0,t;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter array elements \n",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    t=n*(n-1)/2;
    printf("missing number=%d",t-sum);
    return 0;
}