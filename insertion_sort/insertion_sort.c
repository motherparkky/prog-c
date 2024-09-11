#include <stddef.h>
void insertion_sort(int array[], size_t size)
{
    int sorted_arr[sizeof(array)];
    int index = 0;
    int temp = 0;
    for (size_t i = 0; i < size; i++)
    {
        index = 0;
        while (sorted_arr[index] < array[i])
        {
            index++;
        }
        for (int j = index; j < i; j++)
        {
            temp = sorted_arr[j + 1];
            sorted_arr[j + 1] = sorted_arr[j];
        }
        sorted_arr[index] = array[i];
    }
}
