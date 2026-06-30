#include <stdio.h>
struct book{
    int id;
    char title[50];
    char author[50];
};
int main(){
    struct book b [100];
    int n,i;
    printf("enter number of books:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nbook %d\n",i+1);
        printf("Book ID");
        scanf("%d",&b[i].id);
        prinf("title:");
        scanf("%s",b[i].title);
        printf("author:");
        scanf("%s",b[i].author);
    }
    printf("\nLibrary Records\n");
    printf("ID\ttitle\tauthor\n");

    for(i=0;i<n;i++){
        printf("%d\t%s\t%s\n",b[i].id,b[i].title,b[i].author);
    }
    return 0;
}