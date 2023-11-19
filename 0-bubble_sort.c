#include "sort.h"

/**
 * bubble_sort - A function that illustrates
 * the bubble sort algorithm.
 * @array: the data to be sorted.
 * @size: the size of @array.
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swapped = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; (j + 1) < (size - i); ++j)
		{
			if (array[j] > array[j + 1])
			{
				swapped = 1;
				array_swap(array, j, (j + 1));
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}

/**
 * array_swap - A function to swap two arrays.
 * @array: location where @l1, @l2 are stored.
 * @l1: data to swap to the right.
 * @l2: data to swap to the left.
 *
 * Return: void.
 */
void array_swap(int *array, int l1, int l2)
{
	int temp;

	temp = array[l2];
	array[l2] = array[l1];
	array[l1] = temp;
}
