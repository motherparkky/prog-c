#include <stdio.h>

unsigned long my_sqrt(unsigned long n)
{
    float temp, sqrt;
    sqrt = n / 2;
    temp = 0;
    while (sqrt != temp)
    {
        temp = sqrt;
        sqrt = (n / temp + temp) / 2;
    }
    unsigned long ans = sqrt;
    return ans;
}

void prime_factorization(unsigned long n)
{
    unsigned long temp = n;
    int even = 0;
    int e = 0;
    if (temp <= 1)
    {
        return;
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
            return;
        }
    }
    int s = 1;
    for (unsigned long i = 3; i < temp + 1; i += 2)
    {
        e = 0;
        while (temp % i == 0)
        {
            e++;
            temp /= i;
        }
        if (even == 0 && e >= 1)
        {
            printf("%lu^%d", i, e);
            even = 1;
            if (temp == 0)
            {
                printf("\n");
            }
            continue;
        }
        if (e != 0)
        {
            printf(" * %lu^%d", i, e);
        }
        if (s == 1 && i > 5)
        {
            s = 0;
            i += 2;
            continue;
        }
        s = 1;
        if (i > my_sqrt(n))
        {
            i = n - 2;
        }
    }
    printf("\n");
}
