#include <stdio.h>
int main()
{
    int start,end,num,temp,digit,sum=0;
    printf("Enter the starting number: ");
    scanf("%d",&start);
    printf("Enter the ending number: ");
    scanf("%d",&end);
    printf("Armstrong numbers between %d and %d are: ",start,end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        sum=0;
        while(temp!=0)
        {
            digit=temp%10;
            sum+=digit*digit*digit;
            temp/=10;
        }
        if(sum==num)
        {
            printf("%d ",num);
        }
    }

}