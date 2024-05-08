#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using
 * Linear search algorithm
 *
 * @arr: Pointer to the array to search in
 * @size: Size of the array
 * @target: Value to search for
 *
 * Return: Index of the target value in the array, or -1 if not found.
 */

int linear_search(int *arr, size_t size, int target)
{
	int idx;

	if (arr == NULL)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Checking array[%u] = [%d]\n", idx, arr[idx]);
		if (target == arr[idx])
			return (idx);
	}
	return (-1);
}
