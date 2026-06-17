#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("array after removing duplicates");
    for(i=0;.i<n;i++){
        int duplicate=0;
        for(j=o;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate=1;
                break;
            }
        }
    }
    if(!duplicate){
        printf("%d",arr[i]);
    }
    return 0;
}