# include <stdio.h>
int main()
{
    char name[50];
    int seats;
    float fare=250.0,total;

    printf("enter passenger name");
    scanf("%d",name);
    printf("enter numnber of seats");
    scanf("%d",&seats);
    total=seats*fare;
    printf("\n----ticket details----\n");
    printf("passenger  :%s\n",name);
    printf("seatsr     :%d\n",seats);
    printf("total fare :%.2f\n",total);
    return 0;
}