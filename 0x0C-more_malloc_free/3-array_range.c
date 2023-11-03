#include <stdlib.h>
#include "main.h"

/**
 * *array_range - this is the main block
 *
 * Description: this function creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr_;
	int a, size_;

	if (min > max)
		return (NULL);

	size_ = max - min + 1;

	ptr_ = malloc(sizeof(int) * size_);

	if (ptr_ == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr_[a] = min++;

	return (ptr_);
}
