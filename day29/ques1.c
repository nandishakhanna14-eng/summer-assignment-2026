#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    do{
        printf("\n----calculator menu----\n");
        printf("1.addition\n 2. substraction\n 3.multiplication\n 4. division\n 5.exit\n");
        printf("enter yoour choice");
        scanf("%d",&choice);
        if(choice>=1 && choice<=4){
            printf("enter 2 numbers");
            scanf("%f %f",&a,&b);
        }
        switch(choice){
            case1:
            printf("result=%2.f\n",a+b);
            break;
            case2:
            printf("result=%2.f\n",a-b);
            break;
            case3:
            printf("result=%2.f\n",a*b);
            break;
            case4:
            if(b!=0){
                printf("result=%2.f\n",a/b);
            }
            else{
                printf("division by 0 is not possible");
            }
            break;
            case5:printf("exiting....\n");
            break;
            default:printf("invalid choice");
        }
    }while (choice!=5);
    return 0;
}