#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number,guess;
    srand(time(0));
    number= rand()%100+1;
    printf(" guess the number between 1 and 100 \n");
    do{
        printf("enter the guess");
        scanf("%d",&guess);
        if(guess>number){
            printf("too high");
        }
        else if(guess<number){
            printf("too low \n");
        }
        else{
            printf("congratulations! you guessed the correct number");
        }
    }
    while(gues!=number);
    return 0;

}