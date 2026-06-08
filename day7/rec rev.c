#include<stdio.h>
int reverse(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 10) * 100 + reverse(n / 10);
}
int main()
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if(num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }
    
    int reversedNum = reverse(num);
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}