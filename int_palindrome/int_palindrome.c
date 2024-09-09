#include <stdio.h>

int int_palindrome(int n)
{
    if (n < 0)
    {
        return 0;
    }
    int res = 1;
    int div = 10;
    while (res)
    {
        res = n / div;
        div *= 10;
    }
    div /= 100; //Most greatest digits
    int k = 0;
    int div2 = 1;
    int m = n;
    while (div != 0)
    {
        k += div2 * (m / div);
        m %= div;
        div /= 10;
        div2 *= 10;
    }
    if (n == k)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    printf("%d", int_palindrome(8338));
    printf("%d", int_palindrome(55));
}
