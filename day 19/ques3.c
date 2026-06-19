#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("enter matrix elements");
    for(i=0;i<r;i++){
        fo(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf?("%d",a[i][j]);
        }
        ptintf("\n");
    }
    return 0;
}