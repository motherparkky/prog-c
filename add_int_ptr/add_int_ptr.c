#include <stddef.h>
int *add_int_ptr(int *a, int *b)
{
    if (a == NULL || b == NULL)
    {
        return a;
    }
    int c = *a + *b;

    int *res = &c;

    return res;
}
