#include <stdio.h>
struct book{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct book b;
    printf("enter book id");
    scanf("%d",&b.id);
    printf("enter book title");
    scanf("%d",&b.title);
    printf("enter  auther name");
    scanf("%d",&b.author);
    printf("\n----library record-----\n");
    printf("Book ID   :%d\n",b.id);
    printf("Book Title:%d\n",b.title);
    printf("author    :%d\n",b.author);
    
    return 0;
}