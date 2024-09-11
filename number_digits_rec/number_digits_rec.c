unsigned int number_digits_rec(unsigned int n)
{
    static int count = 0;
    static int div = 1;
    if (n == 0)
    {
        return count;
    }
    else
    {
        div *= 10;
        count++;
        return number_digits_rec(n - n % div);
    }
}
