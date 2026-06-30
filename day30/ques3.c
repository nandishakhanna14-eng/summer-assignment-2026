#include <stdio.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct employee e[100];
    int n,i;
    printf("enter number of employees:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("\n employee %d\n",i+1);
        printf("employee ID:");
        scanf("%d",&e[i].id);
        printf("name:");
        scanf("%s",&e[i].name);
        printf("salary:");
        scanf("%f",&e[i].salary);
    }
    printf("\n employee records\n");
    printf("ID\tname\tsalary");

    for(i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
    }
    return 0;
}