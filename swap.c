#include "swap.h"

void swap(int array[], int size)
{
    int i;
    for(i = 1; i < size; i += 2)
    {
        int tmp = array[i-1];
        array[i-1] = array[i];
        array[i] = tmp;
    }
}