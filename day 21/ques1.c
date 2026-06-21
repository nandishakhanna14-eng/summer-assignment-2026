#include<stdio.h>
int main()
{
    char std[100];
    int l=0;
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    while(str[l]!='\0'&& str[l]!='\n')
    {
        l++;
    }
    printf("length of string=%d \n",l);
    return 0;
}