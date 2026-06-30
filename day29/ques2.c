#include <stdio.h>
int main()
{
    int arr[100],n,i,choice,sum=0,max;

    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    do{
        printf("\n 1.display \n 2.sum \n 3.maximum \n 4. exit\n");
        printf("enter choice");
        scanf("%d",&choice);

        switch(choice){
            case1:{
                printf("array:");
                for(i=0;i<n;i++){
                     printf("%d",arr[i]);
                 }
            printf("\n");
            break;
            }
            case2:{
                 sum=0;
                 for(i=0;i<n;i++){
                    sum+=arr[i];
                 }
                 printf("sum=%d\n",sum);
                 break;
            }
            case3:{
                max=arr[0];
            
                for(i=1;i<n;i++){
                if(arr[i]>max){
                    max=arr[i];
                }
                }
                printf("maximum=%d\n",max);
                break;
            }

            case4:{
                printf("exiting...\n");
                break;
            }
            default:{
                printf("invalid choice!\n");
            }
        }
    }while(choice!=4);
    return 0;
}