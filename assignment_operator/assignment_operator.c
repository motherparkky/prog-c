void plus_equal(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return ;
    }
    int res = *a + *b;
    *a = res;
}

void minus_equal(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return ;
    }
    int res = *a - *b;
    *a = res;
}

void mult_equal(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return ;
    }
    int res = *a * *b;
    *a = res;
}

int div_equal(int *a, int *b)
{
    if (a == NULL || b == NULL || *b == 0)
    {
        return 0;
    }
    int res = *a / *b;
    *a = res;
}
