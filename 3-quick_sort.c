#include "sort.h"

/**
 * quick_sort - Used to sort arrays by partitioning.
 * @array: Array to be sorted.
 * @size: Size of @array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (size != 0)
		quickSort(array, 0, (size - 1), size);
}

/**
 * quickSort - Used to sort arrays by partitioning.
 * @arr: Array to be sorted.
 * @low: The beginning of @arr.
 * @high: The end of @arr.
 * @arr_len: The size of @arr.
 * Return: void.
 */
void quickSort(int *arr, size_t low, size_t high, size_t arr_len)
{
	size_t pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, arr_len);
		if (pivot == 0)
			quickSort(arr, low, 0, arr_len);
		else
			quickSort(arr, low, (pivot - 1), arr_len);
		quickSort(arr, (pivot + 1), high, arr_len);
	}
}

/**
 * partition - Used to store an index in the sorted array.
 * @arr: Array to be sorted.
 * @low: The beginning of @arr.
 * @high: The end of @arr.
 * @arr_len: The size of @arr.
 * Return: size_t.
 */
size_t partition(int *arr, size_t low, size_t high, size_t arr_len)
{
	size_t i, j = (low - 1);

	for (i = low; (i < high); i++)
	{
		if (arr[i] < arr[high])
		{
			++j;
			swap2(arr, j, i, arr_len);
		}
	}
	swap2(arr, (j + 1), high, arr_len);
	return (j + 1);
}

/**
 * swap2 - Used to switch two array indexes.
 * @arr: Array to be sorted.
 * @j: The first array index to be swapped.
 * @i: The second array index to be swapped.
 * @arr_len: The size of @arr.
 * Return: void.
 */
void swap2(int *arr, size_t j, size_t i, size_t arr_len)
{
	size_t temp;

	if ((i != j) && (arr[i] != arr[j]))
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		print_array(arr, arr_len);
	}
}
