#include <stdio.h>
int main()
{
    int score=0,ans;
    printf("=====quis=====");
    printf("\n1. capital of india?\n");
    printf("1. mumbai\n 2. delhi\n 3. kolkata\n 4.chennai\n");
    scanf("%d",&ans);
    if(ans==2){
        score++;
    }
    printf("\n2.5+7=?\n");
    printf("1.10\n 2.11\n 3.12\n 4.13\n");
    printf("%d",&ans);
    if(ans==3){
        score++
    }
    printf("\n your score=%d/3\n",score);
    return 0;
}