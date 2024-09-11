unsigned long fibo_iter(unsigned long n)
{
    if ( n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        unsigned long u0 == 0;
        unsigned long u1 == 1;
        unsigned long ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = u0 + u1;
            u0 = u1;
            u1 = ans;
        }
        return ans;
    }
}
