#include <stdio.h>
int main()
{
    int a[100],b[100],c[100];
    int n,m,i,j,k=0;
    printf("enter size of first array");
    scanf("%d",&n);
    printf("enter elements of first sorted array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array");
    scanf("%d",&m);
    printf("enter elements of second array");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    i=j=0;
    while(i<n;i<m;i++){
        if(a[i]<=b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n){
        c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
    printf("merged array");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
    }
    return 0;
}