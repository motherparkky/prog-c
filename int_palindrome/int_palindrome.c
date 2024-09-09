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
    div /= 10;
    int k = 0;//palindrome
    int div2 = 1;
    while (div != 1)
    {
        k += div2 * (n / div);
        div /= 10;
        div2 *= 10;
    }
    if (n == k)
    {
        return 1;
    }
    return 0;
}
