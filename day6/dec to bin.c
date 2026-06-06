#include<stdio.h>
int main()
{
    int dec,bin[32],i=0;
    printf("Enter a decimal number: ");
    scanf("%d",&dec);
    while(dec>0)
    {
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
    printf("The binary representation is: ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }
    return 0;
}