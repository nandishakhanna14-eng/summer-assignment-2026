#include <stdio.h>
struct contact{
    char name[50];
    char phone[50];
    char email[50];
};
int main()
{
    struct contact c;
    printf("enter name:");
    scanf("%[^\n]",c.name);
    printf("enter phone number");
    scanf("%s",c.phone);
    printf("enter email id");
    scanf("%s",c.email);
    printf("\n----contact details----\n");
    printf("name  :%s\n",c.name);
    printf(" phone number:%s\n",c.phone);
    printf("email id:%s\n",c.email);
    return 0;
}