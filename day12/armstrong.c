#include<stdio.h>
int armstrong(int n)
{
    int sum=0,temp=n;
    while(temp!=0)
    {
        int r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    return sum==n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}