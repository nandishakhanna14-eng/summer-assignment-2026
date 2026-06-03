#include <stdio.h>
int main()
{
    int num, ognum,rem;
    result=0;
    printf("enter a number:");
    scanf("%d",num);
    ognum=num;
    while(ognum!=0)
    {
        rem=ognum%10;
        result+=rem*rem*rem;
        ognum/=10;
    }
    if(result==num)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    return 0;
}