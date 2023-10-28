#include <stdio.h>
#include "main.h"

/**
 * _strncat - this is the main block or the Entry point
 *
 * Description: this is a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 *
 * @src: pointer to source input
 *
 * @n: most number of bytes from @src
 *
 * Return: a pointer to the resulting @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, i;

	d = 0;

	while (dest[d])
		d++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d + i] = src[i];

	dest[d + i] = '\0';

	return (dest);
}
