#include <stdio.h>
int main()
{
    long long num;
    long long largestprimefactor=0;
    printf("Enter a number: ");
    scanf("%lld", &num);
    for (long long i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            largestprimefactor = i;
            num /= i;
        }
    }
    printf("The largest prime factor is: %lld\n", largestprimefactor);
    return 0;
}