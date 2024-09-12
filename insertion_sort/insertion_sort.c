#include <stddef.h>

void insertion_sort(int array[], size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        int val = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > val)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = val;
    }
}
