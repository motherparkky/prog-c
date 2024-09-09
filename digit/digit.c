unsigned int digit(int n, int k)
{
    if (n <= 0 || k <= 0)
    {
        return 0;
    }
    int div = 10;
    for (int i = 0;  i < k - 1; i++)
    {
        div *= 10;
    }
    return (n % div) / (div / 10);
}
