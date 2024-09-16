int *add_int_ptr(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return a;
    }
    int *c = *a + *b;

    return c;
}
