#include <stdio.h>
struct item{
    int id;
    char name[30];
    int qty;
    float price;
};
int main(){
    struct item item[100];
    int n,i;

    printf("enter number of items");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\nitem%d\n",i+1);
        printf("id:");
        scanf("%d",&item[i].id);
        printf("name");
        scanf("%s",item[i].name);
        printf("quantity:");
        scanf("%d",&item[i].qty);
        printf("price:");
        scanf("%f",&item[i].price);
    }
    printf("\n------inventory details-----\n");
    printf("id\tname\tqty\tprice\n");

    for(i=0;i<n;i++){
        printf("%d\t%s\t%d\t%.2f\n"
            item[i].id,
            item[i].name,
            item[i].qty,
            item[i].price);
    }
    return 0;
}