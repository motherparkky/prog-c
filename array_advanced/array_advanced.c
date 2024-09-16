#include "array_advanced.h"

#include <stddef.h>
#include <stdlib.h>

int **one_dim_to_two_dim(int array[], size_t m, size_t n)
{
    int **temp = malloc(m * sizeof(int *));
    if (temp == NULL)
    {
        return NULL;
    }
    for (size_t i = 0; i < m; i++)
    {
        temp[i] = malloc(n * sizeof(int));
        if (temp[i] == NULL)
        {
            for (size_t k = 0; k < i; k++)
            {
                free(temp[k]);
            }
            free(temp);
            return NULL;
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            temp[i][j] = array[i * n + j];
        }
    }
    return temp;
}
int *two_dim_to_one_dim(int *array[], size_t m, size_t n)
{
    int *temp = malloc(m * n * sizeof(int));
    if (temp == NULL)
    {
        return NULL;
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            temp[i * n + j] = array[i][j];
        }
    }
    return temp;
}
