#include <stdio.h>

int main(void)
{
    char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        putchat(alphabet);

        if (alphabet != 'z')
        {
            putchar(' ');
        }
    }
    putchar('\n');
}
