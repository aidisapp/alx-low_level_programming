#include <stdio.h>
#include "main.h"

/**
 * _memcpy - this is the main block or the Entry point
 *
 * Description: this is the function that copies memory area
 *
 * @dest: this is the destination memory area
 *
 * @src: this is my source memory area
 *
 * @n: this represents the number of bytes to copy
 *
 * Return: this must return the pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}

	return (dest);
}
