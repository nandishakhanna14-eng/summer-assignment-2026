#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int choice;
    printf("enter first string");
    scanf("%s",str1);
    do{
        printf("\n1.length \n2.copy \n3.concatenate \n4.compare \n5.exit\n");
        printf("enter choice");
        scanf("%d",&choice);

        switch(choice){
            case1:
            {
                printf("length=%lu\n",strlen(str1));
                break;
            }
            case2:
            {
                strcpy(str2,str1);
                printf("copied string=%s\n",str2);
                break;
            }
            case3:
            {
                printf("enter second string:");
                scanf("%s",str2);
                if(strcmp(str1,str2)==0){
                    printf("strings are equal\n");
                }
                else{
                    printf("strings are not equal");
                }
            }
            case5:
            {
                printf("exit\n");
                break;
            }
            default:{
                printf("invalid choice\n");
            }  
        }
    }while(choice!=5);
    return 0;
}