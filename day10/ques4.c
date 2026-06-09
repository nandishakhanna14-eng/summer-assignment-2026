#include<stdio.h>
int main()
{
    int i,j;
    char ch;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            ch='A'+j;
            printf("%c ",ch);
        }
        for(j=i-1;j>=0;j--)
        {
            ch='A'+j;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}