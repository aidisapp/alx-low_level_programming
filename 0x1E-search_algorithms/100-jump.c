#include "search_algos.h"
#include <math.h>

/**
 * search_with_jump - Searches for a value in an array of integers
 * using the Jump search algorithm.
 *
 * @arr: Input array
 * @arr_size: Size of the array
 * @target_value: Value to search for
 *
 * Return: Index of the target value if found, -1 otherwise.
 */

int search_with_jump(int *arr, size_t arr_size, int target_value)
{
	int index, m, k, prev;

	if (arr == NULL || arr_size == 0)
		return (-1);

	m = (int)sqrt((double)arr_size);
	k = 0;
	prev = index = 0;

	do {
		printf("Checking array[%d] = [%d]\n", index, arr[index]);

		if (arr[index] == target_value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)arr_size && arr[index] < target_value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)arr_size; prev++)
	{
		printf("Checking array[%d] = [%d]\n", prev, arr[prev]);
		if (arr[prev] == target_value)
			return (prev);
	}

	return (-1);
}
