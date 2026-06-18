#include <stdio.h>
int main()
{
    int a[100],b[100],n,m,i,j;
    printf("enter the size of first array");
    scanf("%d",&n);
    printf("enter elements of first array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array");
    scanf("%d",&m);
    printf("enter the elements of sec array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("common elements are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]=b[j])
            {
                printf("%d",,a[i]);
            }
        }
    }
    return 0;
}