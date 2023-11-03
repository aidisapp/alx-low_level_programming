#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this is the main point or the Entry block
 *
 * Description: this function fills memory with a constant byte
 *
 * @s: memory area to be filled
 *
 * @b: this is the char to copy
 *
 * @n: this shows the number of times to copy b
 *
 * Return: should retun the pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - this is also the main block here
 *
 * Description: this one allocates memory for an array
 *
 * @nmemb: this represents the number of elements in the array
 *
 * @size: this is the size of each element
 *
 * Return: this should return pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	ptr_ = malloc(size * nmemb);

	if (ptr_ == NULL)
		return (NULL);

	_memset(ptr_, 0, nmemb * size);

	return (ptr_);
}
