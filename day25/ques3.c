#include <stdio.h>
#include <string.h>
int main()
{
    char names[50][50],temp[50];
    int i,n,j;
    printf("enter the names");
    scanf("%d",&n);
    printf("enter names:\n");
    for(i=0;i<n-1;i++){
        scanf("%s",names[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    printf("names in alphabetical order");
    for(i=0;i<n;i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}