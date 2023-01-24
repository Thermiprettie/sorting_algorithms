#include "sort.h"

/**
 * quick_sort - function sorting array of integers using
 * quick sort algorithm in ascending order
 * @array: the array to sort
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - for partitioning
 * @array: array to partition
 * @lo: lower partition
 * @hi: higher partition
 * @size: size of array
 * Return: integer
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int o = lo - 1, p = lo;
	int pivot = array[hi], st8 = 0;

	for (; p < hi; p++)
	{
		if (array[p] < pivot)
		{
			o++;
			if (array[o] != array[p])
			{
				st8 = array[o];
				array[o] = array[p];
				array[p] = st8;
				print_array(array, size);
			}
		}
	}
	if (array[o + 1] != array[hi])
	{
		st8 = array[o + 1];
		array[o + 1] = array[hi];
		array[hi] = st8;
		print_array(array, size);
	}
	return (o + 1);
}

/**
 * quick_s - to sort
 * @array: array
 * @lo: lower
 * @hi: higher
 * @size: size of array
 * Return: void
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quick_s(array, lo, pivot - 1, size);
		quick_s(array, pivot + 1, hi, size);
	}
}
