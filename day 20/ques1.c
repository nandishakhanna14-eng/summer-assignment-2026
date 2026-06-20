#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k;
    printf("enter the numberf of rows and columns of the first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter rows and coloumns of the secound matrix");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2){
        printf("matrix multtiplication not possible");
        return 0;
    }
    int A[r1][c1],B[r2][c2],C[r1][c2];
    printf("enter first matrix");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter second matrix");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j]=0;
            for(k=0;k<c1;k++)
            {
                C[i][j]=A[i][j]*B[i][j];
            }
        }
    }
    printf("result matrix");
    for(i=0;i<r1;i++){
        for(j=0;j<c2:J++){
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}