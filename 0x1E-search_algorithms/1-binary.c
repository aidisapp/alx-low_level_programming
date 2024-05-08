#include "search_algos.h"

/**
* recursive_search - Recursively searches for a value in an
* array of integers using the Binary search algorithm
*
* @arr: Pointer to the first element of the array to search in
* @size_of_arr: Number of elements in the array
* @target_value: Value to search for
*
* Return: Index of the value if found, -1 otherwise
*/

int recursive_search(int *arr, size_t size_of_arr, int target_value)
{
	size_t count;
	size_t half;

	if (arr == NULL || size_of_arr == 0)
		return (-1);

	printf("Searching in array");
	for (count = 0; count < size_of_arr; count++)
		printf("%s %d", (count == 0) ? ":" : ",", arr[count]);
	printf("\n");

	half = size_of_arr / 2;

	if (half && size_of_arr % 2 == 0)
		half--;

	if (target_value == arr[half])
		return ((int)half);

	if (target_value < arr[half])
		return (recursive_search(arr, half, target_value));

	half++;
	return (recursive_search(
			arr + half, size_of_arr - half, target_value) + half);
}

/**
* binary_search - Calls recursive_search to perform a binary search.
*
* @arr: Pointer to the first element of the array to search in.
* @size_of_arr: Number of elements in the array.
* @target_value: Value to search for.
*
* Return: Index of the value if found, -1 otherwise.
*/

int binary_search(int *arr, size_t size_of_arr, int target_value)
{
	int index;

	index = recursive_search(arr, size_of_arr, target_value);

	if (index >= 0 && arr[index] != target_value)
		return (-1);

	return (index);
}
