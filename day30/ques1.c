#include <stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s[100];
    int n,i;
    printf("enter number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n student\n",i+1);
        printf("roll number");
        scanf("%d",&s[i].roll);
        printf("name");
        scanf("%s",s[i].name);
        printf("marks:");
        scanf("%f",&s[i].marks);
    }
    printf("\nstudent records\n");
    printf("roll\tname\tmarks\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",s[i].roll,s[i].name,s[i].marks);
    }
    return 0;
}