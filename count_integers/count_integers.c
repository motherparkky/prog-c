#include "count_integers.h"

#include <stdio.h>

int count_integers(const char *file_in)
{
    FILE *fp;
    int count = 0;
    int f_in;
    int in_number = 0;

    fp = fopen(file_in, "r");
    if (fp == NULL)
    {
        return -1;
    }
    while ((f_in = fgetc(fp)) != EOF)
    {
        if (f_in >= '0' && f_in <= '9')
        {
            if (!in_number)
            {
                count++;
                in_number = 1;
            }
        }
        else
        {
            in_number = 0;
        }
    }
    fclose(fp);
    return count;
}
