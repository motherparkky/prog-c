int my_pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * my_pow(a, b - 1);
    }
}
