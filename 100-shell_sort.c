#include "sort.h"

/**
 * shell_sort - sort an array using shell algorithm
 * @array: the array to sort
 * @size: array size
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	unsigned int o = 0, p = 0, dit = 0;
	int st8 = 0;

	if (array == NULL || size < 2)
		return;
	while (dit < size / 3)
		dit = dit * 3 + 1;

	for (; dit > 0; dit = (dit - 1) / 3)
	{
		for (o = dit; o < size; o++)
		{
			st8 = array[o];
			for (p = o; p >= dit && array[p - dit] > st8;
					p -= dit)
			{
				if (array[p] != array[p - dit])
					array[p] = array[p - dit];
			}
			if (array[p] != st8)
				array[p] = st8;

		}
		print_array(array, size);
	}
}
