#include <stdio.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("enter the string");
    gets(str);

    printf("enter character to find frequency");
    scanf("%c",&ch);
    fot(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("frequency of '%c'=%d",ch,count);
    return 0;
}