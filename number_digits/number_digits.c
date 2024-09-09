unsigned int number_digits(unsigned int n)
{
    int res = 1;
    int div = 10;
    int ans = 0;
    while (res)
    {
        res = n / div;
        div *= 10;
        ans++;
    }
    return ans;
}
