#include <stdio.h>
int main()
{
    char name[50];
    int accNo;
    float balance,deposit,withdraw;
    printf("enter Account Number");
    scanf("%d",&accNo);
    printf("enter account holder name");
    scanf("%f",name);
    printf("enter initial balance");
    scanf("%f",&balance);
    printf("enter diposit balance");
    scanf("%f",&deposit);
    balance+=deposit;
    printf("enter withdrawal amount");
    scanf("%f",&withdraw);

    if(withdraw<=balance){
        balance-=withdraw;
    }
    else{
        printf("insufficient balance");
    }
    printf("\n----amount details----\n");
    printf("account no  :%d\n",accNo);
    printf("name        :%d\n",name);
    printf("balance     :%d\n",balance);
    return 0;
}