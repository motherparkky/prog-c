#include <stdio.h>

int main(void)
{
    char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        putchar(alphabet);

        if (alphabet != 'z')
        {
            putchar(' ');
        }
    }
    putchar('\n');
}
