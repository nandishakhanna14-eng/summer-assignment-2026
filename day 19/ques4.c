#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("enter the order of square matrix");
    scanf("%d"&n);
    int a[n][n];
    printf("enter matrix elements");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i][j];
    }
    printf("sum of principal diagonal=%d",sum);
    return 0;
}
