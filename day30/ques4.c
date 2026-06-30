#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
void display(structstudents[],int n)
{
    int i;
    printf("\nroll\tname\tmarks\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
}
int main()
{
    struct student s[100];
    int n,i;
    printf("enter number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n student%d\n");
        printf("roll no");
        scanf("%d",&s[i].roll);
        printf("name");
        scanf("%s",s[i].name);
        printf("marks");
        scanf("%f",&s[i].marks);
    }
    display(s,n);
    return 0;
}