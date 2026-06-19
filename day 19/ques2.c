#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],sub[r][c];
    printf("enter first matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[r][c]);
        }
    }
    printf("enter second matrix");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[r][c]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("sub matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",sub[i][j] \n);
        }
    }
    return 0;
}
