#include <stdio.h>
int main()
{
    int n, i;
    int count = 0;
    printf(" enter a number ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf(" the number is positive\n");
    }
    if (n < 0)
    {
        printf("the number is negative\n ");
    }
    if (n == 0)
    {
        printf("the number is zero\n");
    }
    // odd even check
    if (n % 2 == 0)
    {
        printf("the number is even \n");
    }
    if (n % 2 != 0)
    {
        printf(" the number is odd\n");
    }
    // prime number check
    for (int i = 2; i <= n - 1; i++)
    {

        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 1)
    {
        printf("the number is not prime\n ");
    }
    else
    {
        printf("the number is  prime\n");
    }

    return 0;
}
