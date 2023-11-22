#include "sort.h"

/**
 * selection_sort - Used to sort array based on minimum
 * index.
 * @array: Array to be sorted.
 * @size: size of @array.
 * Return: void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, min_index = 0, arr_len = size;

	if (array != NULL)
	{
		for (i = 0; i <= (arr_len - 1); i++)
		{
			min_index = i;
			for (j = i; j < (arr_len - 1); j++)
			{
				if (array[(j + 1)] < array[min_index])
					min_index = (j + 1);
			}

			if (min_index != i)
			{
				temp = array[min_index];
				array[min_index] = array[i];
				array[i] = temp;
				print_array(array, arr_len);
			}
		}
	}
}
