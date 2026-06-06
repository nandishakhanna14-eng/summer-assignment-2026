#include <stdio.h>
int main()
{
    int x,n,i;
    long long result=1;
    printf("Enter the base number: ");
    scanf("%d",&x);
    printf("Enter the exponent: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d to the power of %d is: %lld",x,n,result);
    return 0;
}