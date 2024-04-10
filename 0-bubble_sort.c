#include "sort.h"
/**
 * swap - Swaps two elements of an array
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * bubble_sort - Sorts an array of integers
 * @array: Array of integers to sort
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int swapped;
if (size < 2)
return;
for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
swapped = 1;
}
}
if (!swapped)
break;
}
}
