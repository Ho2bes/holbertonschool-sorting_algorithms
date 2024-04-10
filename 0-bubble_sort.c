#include "sort.h"

/**
 * swap - Swaps two elements of an array
 * @a: Integer a
 * @b: Integer b
 */
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array of integers to sort
 * @size: Size of the array
 *
 * Description: Implements the Bubble Sort algorithm to sort the array.
 * Prints the array after each iteration.
 */
void bubble_sort(int *array, size_t size)
{
  size_t i, j;
  if (size < 2)
    return;
  for (i = 0; i < size - 1; i++)
    {
      for (j = 0; j < size - i - 1; j++)
	{
	  /* Exchange if the current element is greater than the next element */
	  if (array[j] > array[j + 1])
	    {
	      swap(&array[j], &array[j + 1]);
	      print_array(array, size);
	    }
	}
    }
}
