#include <stddef.h>

void insertion_sort(int array[], size_t size)
{
    int sorted_arr[100];
    sorted_arr[0] = array[0];
    size_t index = 0;
    for (size_t i = 1; i < size; i++)
    {
        index = 0;
        while (index < i && sorted_arr[index] < array[i])
        {
            index++;
        }
        for (size_t j = i - 1; j >= index; j--)
        {
            sorted_arr[j + 1] = sorted_arr[j];
        }
        sorted_arr[index] = array[i];
    }
}
