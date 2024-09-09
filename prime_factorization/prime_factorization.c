#include <stdio.h>

void prime_factorization(unsigned long n)
{
    unsigned long temp = n;
    int even = 0;
    int e = 0;
    if (temp <= 1)
    {
        return ;
    }
    printf("%lu = ", n);
    if (temp % 2 == 0)
    {
        printf("2^");
        while (temp % 2 == 0)
        {
            e++;
            temp /= 2;
        }
        printf("%d", e);
        even = 1;
        if (temp == 0)
        {
            printf("\n");
            return ;
        }
    }
    for (unsigned int i = 3; i < temp + 1; i += 2)
    {
        e = 0;
        while (temp % i == 0)
        {
            e++;
            temp /= i;
        }
        if (even == 0 && e >= 1)
            {
                printf("%d^%d", i, e);
                even = 1;
                if (temp == 0)
                {
                    printf("\n");
                }
                continue;
            }
        if (e != 0)
        {
            printf(" * %d^%d", i, e);
        }
    }
    printf("\n");
}
