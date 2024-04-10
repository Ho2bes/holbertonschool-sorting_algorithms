#include "sort.h"

/**
 * shell_sort - Sorts an array of integers using the Shell sort algorithm
 * Description: with Knuth sequence
 * @array: The array to sort
 * @size: Size of the array
 */
void shell_sort(int array[], int size)
{
int temp, i, j, interval = 1;
if (array == NULL || size < 2)
return;
/* Calculate the maximum interval according to the Knuth sequence */
while (interval * 3 + 1 < size)
interval = interval * 3 + 1;
while (interval > 0)
{
for (i = interval; i < size; i++)
{
temp = array[i];
j = i;
/* Insertion sort */
while (j >= interval && array[j - interval] > temp)
{
array[j] = array[j - interval];
j -= interval;
}
array[j] = temp;
}
print_array(array, size);
/* Calculate the next smaller interval */
interval = (interval - 1) / 3;
}
}
