unsigned int number_digits_rec(unsigned int n)
{
    static int count = 1;
    static int div = 1;
    if (n == 0)
    {
        return count;
    }
    else
    {
        div *= 10;
        count++;
        if (n - n % div == 0)
        {
            return count - 1;
        }
        return number_digits_rec(n - n % div);
    }
}
