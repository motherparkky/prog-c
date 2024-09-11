#include <stdio.h>

void my_hanoi(unsigned n, int from, int to, int aux)
{
    if (n == 0)
        return;
    my_hanoi(n - 1, from, aux, to);
    printf("%d->%d\n", from, to);
    my_hanoi(n - 1, aux, to, from);
}

void hanoi(unsigned n)
{
    my_hanoi(n, 1, 3, 2);
}
