#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the array to sort
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int st8 = 0;
	size_t o = 0, p = 0, sto = 0;

	if (array == NULL || size == 0)
		return;

	for (; o < size - 1; o++)
	{
		sto = o;
		for (p = o + 1; p < size; p++)
		{
			if (array[p] < array[sto])
				sto = p;
		}
		if (sto != o)
		{
			st8 = array[o];
			array[o] = array[sto];
			array[sto] = st8;
			print_array(array, size);
		}
	}
}
