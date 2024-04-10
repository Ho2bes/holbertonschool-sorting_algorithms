#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t current_index, compare_index, min_index;
	int temporary, has_swapped = 0;

	for (current_index = 0; current_index < size - 1; current_index++)
	{
		has_swapped = 0;
		min_index = current_index;
		for (compare_index = current_index + 1; compare_index < size; compare_index++)
		{
			if (array[compare_index] < array[min_index])
			{
				min_index = compare_index;
				has_swapped = 1;
			}
		}
		if (has_swapped)
		{
			temporary = array[current_index];
			array[current_index] = array[min_index];
			array[min_index] = temporary;
			print_array(array, size);
		}
	}
}
