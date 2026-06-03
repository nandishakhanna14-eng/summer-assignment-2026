#include<stdio.h>
int main()
{
    int num,on,rev=0;
    printf("enter the number:");
    scanf("%d",&num);
    on=num;
    while(num!=0)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if(on==rev)
    {
        printf("the number is palindrome",on);
    }
    else
    {
        printf("the number is not palindrome",on);
    }
    return 0;
}